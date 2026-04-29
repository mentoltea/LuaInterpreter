# Интерпретатор Lua

## Сборка и использование
```bash
cd build
cmake ..
cmake --build .
```
Будет создан файл `luai` в папке `build/bin`

```
luai [PATH]
```


## Структура и ключевые отличия от стандарта Lua
1. Парсинг (ANTLR lexer/parser + конструирование AST)
2. Компиляция в байткод
3. Подготовка интерпретатора (добавление и компиляция библиотек)
4. Интерпретация

Непосредственно выполнением байткода занимаются Испольнители (в коде: `Executioner`), содержащие весь необходимый для одного потока стейт. Данная архитектура выбрана для возможности переключать исполняемый поток используя только один "реальный" (системный) поток.

Многопоточность реализована в кооперативном виде, то есть поток не уйдёт с исполнения, пока явно не передаст очередь следующему потоку. В случае Lua 5.5 передача исполнения происходит в данный случаях:
* `return` ( `RET` в байткоде )
* Вызов `coroutine.resume`
* Вызов `coroutine.yield`
* Завершение выполнения потока  

Вызов `pcall` не должен передавать очередь исполнения, даже если внутри него явно исполняется `coroutine.resume` или `coroutine.yield` ([подробнее](#Особенности) описано в отличиях от стандарта).

Ниже представлен список отличий от официального [стандарта Lua 5.5](https://www.lua.org/manual/5.5/manual.html)
### Грамматика
Отсутствуют:
* Вызов функций с синтаксисом таблиц 
`function {...}`

* Вызов функций с синтаксисом строк 
`function "..."`

### Компилятор
Не поддерживается:
* Присваивание и объявление при количестве значений больше количества аргументов  
`arg_1, ..., arg_N = exp_1, ..., exp_M` при M > N  
Замечание: в самом интерпретаторе такого ограничения нет, и если какое-то из выражений кладёт на стек несколько аргументов, то с правой стороны может быть больше выражений, чем с левой.   
Например: `status, result = pcall(f)`.  
Данное ограничение на этапе компиляции введено, тк любое выражение (кроме отдельных стандартных функций) после себя оставляет значение на стеке.

* Присваивание выражению `exp = exp`  
Примеры:  
```
f(1) = 2
f().x = 3
```
Замечание: это не касается динамической индексации.  
То есть выражения `table[get_key1()]...[get_keyN] = value` являются валидными

* Атрибуты, помимо `const`

* `goto` и лэйблы

### Интерпретатор
Список стандартных библиотек и функций:

type(v) -> String  
callable(v) -> Boolean  
setmetatable(t, mt) -> Table  
getmetatable(t) -> Table | Nil  
  
ipairs(t) -> (Iterator, Table, Int)  
pairs(t) -> (Iterator, Table, Any)  
  
iterator:next() -> (Any, Any) | Nil  
  
map(t, f) -> Table  
imap(t, f) -> Table  
  
#### io  
file:close() -> Nil  
file:flush() -> Nil  
file:lines(...) -> Table  
file:read(...) -> String  
file:seek(whence, offset) -> Nil  
file:write(...) -> Int  
io.close(file) -> Nil  
io.flush() -> Nil  
io.input(file) -> File  
io.lines(filename, ...) -> String  
io.open(filename, mode) -> File  
io.output(file) -> File  
io.read(...) -> String  
io.type(obj) -> String  
io.write(...) -> Int  
io.print(...) -> Int  
  
#### coroutine  
coroutine.close(co) -> Boolean  
coroutine.create(f) -> Thread  
coroutine.isyieldable(co) -> Boolean  
coroutine.ready(co) -> Boolean  
coroutine.resume(co, ...) -> Boolean, ...  
coroutine.running() -> Thread, Boolean  
coroutine.status(co) -> String  
coroutine.wrap(f) -> Function  
coroutine.yield(...) -> ...  
  
#### math  
math.abs(x) -> Number  
math.acos(x) -> Number  
math.asin(x) -> Number  
math.atan(x) -> Number  
math.ceil(x) -> Integer  
math.cos(x) -> Number  
math.deg(x) -> Number  
math.exp(x) -> Number  
math.floor(x) -> Integer  
math.fmod(x, y) -> Number  
math.frexp(x) -> Number, Integer  
math.ldexp(m, e) -> Number  
math.log(x, base) -> Number  
math.max(x, ...) -> Number  
math.min(x, ...) -> Number  
math.modf(x) -> Number, Number  
math.rad(x) -> Number  
math.random(m, n) -> Number  
math.randomseed(x) -> nil  
math.sin(x) -> Number  
math.sqrt(x) -> Number  
math.tan(x) -> Number  
math.tointeger(x) -> Integer or nil  
math.type(x) -> String  
math.ult(m, n) -> Boolean  

#### string
string.byte(s, i, j) -> Integer, ...  
string.char(...) -> String  
string.find(s, pattern, init, plain) -> Integer, Integer, ...  
string.format(formatstring, ...) -> String  
string.len(s) -> Integer  
string.lower(s) -> String  
string.rep(s, n, sep) -> String  
string.reverse(s) -> String  
string.sub(s, i, j) -> String  
string.upper(s) -> String  

---
Не поддерживается:
* Индексация таблиц с Nil, Table и Thread

* Установка атрибутов на переменные

* Битовые операторы (<<, >>, &, |, ~)

* Оператор возведения в степень (^)

* Перегрузка операторов:
    - Индексации
    - Сравнения (>, >=, <, <=)
    - Конкатенации
    - Арифметических операторов (+, -, *, /, //, %)
    - Унартных операторов (#, -, )

---
#### Особенности
* При вызове `pcall` исполнение будет происходить до возвращения из переданной функции. По этой причине внутри вызова **НЕЛЬЗЯ** передавать котроль выполнения, то есть вызывать `coroutine.resume`, поскольку это может привести к UB.

* Ошибки, не пойманные в `pcall`, будут останавливать выполнение всего интерпретатора, а не только потока, получившего ошибку.

* `io.read` не читает значения по аналогии с `scanf` - только возвращает всю прочитанную строку

