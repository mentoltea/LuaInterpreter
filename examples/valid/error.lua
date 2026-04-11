local function hello_world()
    return io.write("Hello world\n")
end

local function custom_error_func()
    error("ERROR!!1!")
end

local function bad_function(f)
    io.write("Trying to call argument ", f, "\n")
    return f()
end

local succ, result = pcall(bad_function, hello_world)
if (succ) then
    io.write("Success!\n")
    io.write("Result: ", result, "\n")
else
    io.write("Error occured!\n")
    io.write("Error: ", result, "\n")
end

local succ, result = pcall(bad_function, nil)
if (succ) then
    io.write("Success!\n")
    io.write("Result: ", result, "\n")
else
    io.write("Error occured!\n")
    io.write("Error: ", result, "\n")
end

local succ, result = pcall(bad_function, custom_error_func)
if (succ) then
    io.write("Success!\n")
    io.write("Result: ", result, "\n")
else
    io.write("Error occured!\n")
    io.write("Error: ", result, "\n")
end