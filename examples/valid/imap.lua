mass = { 1, 2, 3, 4, 5, 6 }

for i,k in ipairs(mass) do
    io.write(i, ": ", k, "\n");
end

io.write("-----------\n");

mass = imap(mass, 
    function (x) 
        return x*x - 1 
    end
)

for i,k in ipairs(mass) do
    io.write(i, ": ", k, "\n");
end