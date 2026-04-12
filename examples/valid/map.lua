mass = { 1, 2, ["key"] = "value", ["func"] = io.write, [9999] = true }

for k,v in pairs(mass) do
    io.write(k, ": ", v, "\n");
end

io.write("-----------\n");

mass = map(mass, 
    function (x) 
        return type(x) 
    end
)

for k,v in pairs(mass) do
    io.write(k, ": ", v, "\n");
end