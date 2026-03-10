-- Стек на таблице
Stack = {}

function Stack:new()
    local obj = {items = {}}
    setmetatable(obj, self)
    self.__index = self
    return obj
end

function Stack:push(item)
    self.items[table_length(self.items) + 1] = item
end

function Stack:pop()
    local len = table_length(self.items)
    if len == 0 then
        return nil
    end
    local item = self.items[len]
    self.items[len] = nil
    return item
end

-- Калькулятор
Calculator = {total = 0}

function Calculator:new()
    local obj = {total = 0}
    setmetatable(obj, self)
    self.__index = self
    return obj
end

function Calculator:add(value)
    self.total = self.total + value
    return self
end

function Calculator:subtract(value)
    self.total = self.total - value
    return self
end

function Calculator:multiply(value)
    self.total = self.total * value
    return self
end

function Calculator:get()
    return self.total
end

local calc = Calculator:new()
calc:add(10):subtract(3):multiply(2)
print(calc:get())  -- 14

-- Поиск простых чисел
function is_prime(n)
    if n < 2 then return false end
    for i = 2, math.sqrt(n) do
        if n % i == 0 then
            return false
        end
    end
    return true
end

function find_primes(limit)
    local primes = {}
    for i = 2, limit do
        if is_prime(i) then
            primes[table_length(primes) + 1] = i
        end
    end
    return primes
end

local primes = find_primes(50)
for i = 1, table_length(primes) do
    io.write(primes[i], " ")
end
io.write("\n")
goto END

::END::

local func = function (a) 
    io.write("lambda func: ", a)
end

func()