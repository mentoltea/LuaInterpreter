-- Различные способы записи строк
local s1 = "обычная строка"
local s2 = 'строка в одинарных кавычках'
local s3 = "строка с \"кавычками\" внутри"
local s4 = [[многострочная
строка
с произвольным текстом]]
local s5 = [=[строка с [[вложенными]] скобками]=]

-- Операции со строками
local a = "Hello"
local b = "World"
local c = a .. " " .. b  -- конкатенация
print(c)  -- Hello World

print(string.len(c))     -- длина строки
print(string.sub(c, 1, 5))  -- подстрока "Hello"
print(string.upper(c))   -- HELLO WORLD
print(string.lower(c))   -- hello world

-- Поиск в строке
local text = "The quick brown fox"
local start, finish = string.find(text, "brown")
print(start, finish)  -- 11 15