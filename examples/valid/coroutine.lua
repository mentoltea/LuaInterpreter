local coroutine_gen = coroutine.create(
    function()
        local sum = 0
        
        local value = coroutine.yield("Waiting for first number")
        print("Got first number:", value)
        sum = sum + value
        
        value = coroutine.yield("Waiting for second number")
        print("Got second number:", value)
        sum = sum + value
        
        value = coroutine.yield("Waiting for third number")
        print("Got third number:", value)
        sum = sum + value
        
        return sum
    end
)

local status, result = true

local i = 0
while (status ~= nil) do 
    print()
    status, result = coroutine.resume(coroutine_gen, i)
    print("Status: ", status)
    if (status) then 
        print("Result: ", result)
    else 
        print("Final result: ", result)
    end
    i = i + 10
end

print("Coroutine finished")