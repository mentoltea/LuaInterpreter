-- Вывод
io.write("Enter your name: ")
io.flush()

-- Ввод
local name = io.read()
io.write("Hello, ", name, "!\n")

-- Чтение чисел
io.write("Enter two numbers: ")
local a = io.read("*n")
local b = io.read("*n")
io.write("Sum: ", a + b, "\n")

-- Чтение всей строки
io.write("Enter a line: ")
local line = io.read("*l")
io.write("You entered: ", line, "\n")

-- Работа с файлами
local f = io.open("test.txt", "w")
f:write("Hello, file!\n")
f:write("Second line\n")
f:close()

f = io.open("test.txt", "r")
local content = f:read("*all")
print(content)
f:close()