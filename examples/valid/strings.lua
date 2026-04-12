-- test_string_lib.lua
-- Скрипт для тестирования функций строковой библиотеки

function print_separator(title)
    print("\n" .. string.rep("=", 60))
    print("TEST: " .. title)
    print(string.rep("=", 60))
end

function test_byte()
    print_separator("string.byte()")
    
    local s = "Hello World"
    print("s = \"Hello World\"")
    
    -- Получение байтов
    print("string.byte(s, 1) =", string.byte(s, 1))     -- 72 (H)
    print("string.byte(s, 6) =", string.byte(s, 6))     -- 32 (space)
    print("string.byte(s, -1) =", string.byte(s, -1))   -- 100 (d)
    
    -- Тест с пустой строкой
    local empty = ""
    print("string.byte(\"\", 1) =", string.byte(empty, 1))
    
    -- Тест через метод
    print("s:byte(1) =", s:byte(1))
    print("s:byte(-1) =", s:byte(-1))
end

function test_char()
    print_separator("string.char()")
    
    print("string.char(72,101,108,108,111) =", string.char(72,101,108,108,111))  -- Hello
    print("string.char(87,111,114,108,100) =", string.char(87,111,114,108,100))  -- World
    print("string.char(65,66,67) =", string.char(65,66,67))  -- ABC
    print("string.char() =", string.char() or "empty string")
    
    -- Тест с одним аргументом
    print("string.char(97) =", string.char(97))  -- a
end

function test_find()
    print_separator("string.find()")
    
    local s = "Hello World"
    print("s = \"Hello World\"")
    
    local pos1, pos2 = string.find(s, "World")
    print("string.find(s, \"World\") =", pos1, pos2)  -- 7 11
    
    local pos1, pos2 = string.find(s, "lo")
    print("string.find(s, \"lo\") =", pos1, pos2)  -- 4 5
    
    local pos1, pos2 = string.find(s, "XYZ")
    print("string.find(s, \"XYZ\") =", pos1, pos2)  -- nil
    
    -- Через метод
    local pos1, pos2 = s:find("ell")
    print("s:find(\"ell\") =", pos1, pos2)  -- 2 4
end

function test_format()
    print_separator("string.format()")
    
    -- Различные форматы
    print("string.format(\"Hello %s!\", \"World\") =", string.format("Hello %s!", "World"))
    print("string.format(\"%d + %d = %d\", 2, 3, 5) =", string.format("%d + %d = %d", 2, 3, 5))
    print("string.format(\"%.2f\", 3.14159) =", string.format("%.2f", 3.14159))
    print("string.format(\"%.3f\", math.pi) =", string.format("%.3f", math.pi))
    print("string.format(\"%x\", 255) =", string.format("%x", 255))
    print("string.format(\"%X\", 255) =", string.format("%X", 255))
    print("string.format(\"%04d\", 42) =", string.format("%04d", 42))
    print("string.format(\"%10s\", \"test\") =", string.format("%10s", "test"))
    print("string.format(\"%-10s\", \"test\") =", string.format("%-10s", "test"))
    print("string.format(\"%%\") =", string.format("%%"))  -- Экранирование процента
end

function test_len()
    print_separator("string.len()")
    
    print("string.len(\"Hello\") =", string.len("Hello"))  -- 5
    print("string.len(\"\") =", string.len(""))  -- 0
    
    -- Через метод
    local s = "Lua Programming"
    print("s = \"Lua Programming\"")
    print("s:len() =", s:len())  -- 15
    print("#s =", #s)  -- Оператор длины тоже должен работать
end

function test_lower()
    print_separator("string.lower()")
    
    print("string.lower(\"HELLO WORLD\") =", string.lower("HELLO WORLD"))
    print("string.lower(\"Lua Programming 123!\") =", string.lower("Lua Programming 123!"))
    print("string.lower(\"ABC\") =", string.lower("ABC"))
    print("string.lower(\"\") =", string.lower(""))
    
    -- Через метод
    local s = "UPPERCASE"
    print("s = \"UPPERCASE\"")
    print("s:lower() =", s:lower())
end

function test_rep()
    print_separator("string.rep()")
    
    print("string.rep(\"a\", 5) =", string.rep("a", 5))
    print("string.rep(\"ab\", 3, ",") =", string.rep("ab", 3, ","))
    print("string.rep(\"-\", 10) =", string.rep("-", 10))
    print("string.rep(\"x\", 0) =", string.rep("x", 0) == "" and "\"\"" or string.rep("x", 0))
    print("string.rep(\"hello \", 2, \"|\") =", string.rep("hello ", 2, "|"))
    
    -- Тест с большим числом (осторожно!)
    -- print("string.rep("*", 1000) =", string.len(string.rep("*", 1000)))  -- 1000
end

function test_reverse()
    print_separator("string.reverse()")
    
    print("string.reverse(\"hello\") =", string.reverse("hello"))
    print("string.reverse(\"Lua\") =", string.reverse("Lua"))
    print("string.reverse(\"12345\") =", string.reverse("12345"))
    print("string.reverse(\"racecar\") =", string.reverse("racecar"))
    print("string.reverse(\"\") =", string.reverse(""))
    print("string.reverse(\"a b c\") =", string.reverse("a b c"))
    
    -- Через метод
    local s = "reverse me"
    print("s = \"reverse me\"")
    print("s:reverse() =", s:reverse())
end

function test_sub()
    print_separator("string.sub()")
    
    local s = "Hello World"
    print("s = \"Hello World\"")
    
    print("string.sub(s, 1, 5) =", string.sub(s, 1, 5))    -- Hello
    print("string.sub(s, 7) =", string.sub(s, 7))          -- World
    print("string.sub(s, -5) =", string.sub(s, -5))        -- World
    print("string.sub(s, -5, -1) =", string.sub(s, -5, -1)) -- World
    print("string.sub(s, 1, -6) =", string.sub(s, 1, -6))   -- Hello
    print("string.sub(s, 10, 20) =", string.sub(s, 10, 20)) -- rld
    print("string.sub(s, -20, 5) =", string.sub(s, -20, 5)) -- Hello
    print("string.sub(s, 5, 3) =", string.sub(s, 5, 3) == "" and "\"\"" or string.sub(s, 5, 3))
    
    -- Через метод
    print("s:sub(1, 1) =", s:sub(1, 1))    -- H
    print("s:sub(-1) =", s:sub(-1))        -- d
    
    -- Тест с пустой строкой
    local empty = ""
    print("string.sub(empty, 1, 1) =", string.sub(empty, 1, 1) == "" and "\"\"" or string.sub(empty, 1, 1))
end

function test_upper()
    print_separator("string.upper()")
    
    print("string.upper(\"hello world\") =", string.upper("hello world"))
    print("string.upper(\"Lua Programming 123!\") =", string.upper("Lua Programming 123!"))
    print("string.upper(\"abc\") =", string.upper("abc"))
    print("string.upper(\"\") =", string.upper(""))
    
    -- Через метод
    local s = "lowercase"
    print("s = \"lowercase\"")
    print("s:upper() =", s:upper())
end

function test_edge_cases()
    print_separator("Edge Cases")
    
    -- Пустые строки
    print("string.lower(\"\") =", string.lower("") == "" and "\"\"" or string.lower(""))
    print("string.upper(\"\") =", string.upper("") == "" and "\"\"" or string.upper(""))
    print("string.reverse(\"\") =", string.reverse("") == "" and "\"\"" or string.reverse(""))
    print("string.len(\"\") =", string.len(""))
    
    -- Строки с пробелами и спецсимволами
    local special = "  Hello\tWorld\n!"
    print("special string: \"\" .. special .. \"\"")
    print("string.lower(special) =", string.lower(special))
    print("string.upper(special) =", string.upper(special))
    
    -- Очень длинная строка (тест производительности)
    local long = string.rep("a", 1000)
    print("Length of long string (1000):", #long)
    print("string.reverse(long): length =", #string.reverse(long))
end

function test_method_syntax()
    print_separator("Method Syntax (s:func() vs string.func(s))")
    
    local s = "Hello World"
    
    -- Демонстрация эквивалентности
    print("s:len() =", s:len())
    print("string.len(s) =", string.len(s))
    
    print("s:sub(1,5) =", s:sub(1,5))
    print("string.sub(s,1,5) =", string.sub(s,1,5))
    
    print("s:lower() =", s:lower())
    print("string.lower(s) =", string.lower(s))
    
    print("s:upper() =", s:upper())
    print("string.upper(s) =", string.upper(s))
    
    print("s:reverse() =", s:reverse())
    print("string.reverse(s) =", string.reverse(s))
    
    print("s:byte(1) =", s:byte(1))
    print("string.byte(s,1) =", string.byte(s,1))
end


-- Главная функция тестирования
function run_all_tests()
    print("\n" .. string.rep("*", 60))
    print("STARTING STRING LIBRARY TESTS")
    print(string.rep("*", 60))
    
    test_byte()
    test_char()
    test_find()
    test_format()
    test_len()
    test_lower()
    test_rep()
    test_reverse()
    test_sub()
    test_upper()
    test_edge_cases()
    test_method_syntax()
    
    print("\n" .. string.rep("*", 60))
    print("ALL TESTS COMPLETED")
    print(string.rep("*", 60))
end

-- Запуск всех тестов
run_all_tests()

print("\nTests finished!")