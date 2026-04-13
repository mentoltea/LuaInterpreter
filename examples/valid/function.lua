-- Обычная функция
function add(a, b)
    return a + b
end

-- Локальная функция
local function multiply(a, b)
    return a * b
end

-- Функция с несколькими возвращаемыми значениями
function min_max(a, b, c)
    local min = a
    local max = a
    if b < min then min = b end
    if b > max then max = b end
    if c < min then min = c end
    if c > max then max = c end
    return min, max
end

local mn, mx = min_max(5, 2, 8)  -- mn=2, mx=8

-- Функция с переменным числом аргументов (через arg)
function join(separator, ...)
    local result = varg[0]
    for i = 1, (#varg - 1) do
        result = result .. separator .. varg[i]
    end
    return result
end
-- (nil)()
print(join(", ", "apple", "banana", "orange"));  -- apple, banana, orange

-- Рекурсивная функция
function factorial(n)
    if n <= 1 then
        return 1
    else
        return n * factorial(n - 1)
    end
end

obj = {}
obj.subobj = {
    x = 10
}
function obj.subobj:print() 
    print("x =", self.x)
end

obj.subobj:print()