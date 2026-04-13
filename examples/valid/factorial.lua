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
io.write(N, " factorial (recursive): ", factorial_recursive(N), "\n")
io.write(N, " factorial (iterative): ", factorial_iterative(N), "\n")