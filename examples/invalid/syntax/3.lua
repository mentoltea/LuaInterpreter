-- ОШИБКА: нет end
function add(a, b)
    return a + b

-- ОШИБКА: нет имени функции
function (a, b) end

-- ОШИБКА: нет скобок
function add a, b end

-- ОШИБКА: лишние скобки
function add((a, b)) end

-- ОШИБКА: неправильный синтаксис varargs
function test(..., x) end  -- ... должен быть последним

-- ОШИБКА: return с выражением в неправильном месте
function test()
    return
    x = 10
end