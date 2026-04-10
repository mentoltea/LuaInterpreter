function factorial_recursive(n)
    if n < 0 then
        error("n < 0")
    end
    if n <= 1 then
        return 1
    end
    return n * factorial_recursive(n - 1)
end

function factorial_iterative(n)
    if n < 0 then
        error("n < 0")
    end
    local result = 1
    for i = 2, n do
        result = result * i
    end
    return result
end

local N = 4
io.write("\e[31m", N, " factorial (recursive): ", factorial_recursive(N), "\e[m\n")
io.write("\e[31m", N, " factorial (iterative): ", factorial_iterative(N), "\e[m\n")