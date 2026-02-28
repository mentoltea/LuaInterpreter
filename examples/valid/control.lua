-- If-else
local x = (x > 10)
if (x > 10) then
    print("x > 10")
elseif x > 5 then
    print("5 < x <= 10")
else
    print("x <= 5")
end

-- While
local i = 1
while i <= 5 do
    io.write(i .. " ")
    i = i + 1
end
io.write("\n")

-- Repeat-until
local j = 1
repeat
    io.write(j .. " ")
    j = j + 1
until j > 5
io.write("\n")

-- Numeric for
for i = 1, 5 do
    io.write(i .. " ")
end
io.write("\n")

for i = 5, 1, -1 do
    io.write(i .. " ")
end
io.write("\n")