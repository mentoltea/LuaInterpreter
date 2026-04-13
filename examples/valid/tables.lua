local colors = {"red", "green", "blue"}
print(colors[0])  -- red
print(colors[1])  -- green
print(colors[2])  -- blue

colors[3] = "yellow"

function table_length(t)
    local i = 1
    while t[i] ~= nil do
        i = i + 1
    end
    return i - 1
end

print("Length:", table_length(colors))

local person = {
    name = "John",
    age = 30,
    city = "New York"
}
print(person.name)
print(person["age"])

local data = {
    "first",
    key = "value",
    [10] = "ten",
    nested = { x = 1, y = 2 }
}

for key, value in pairs(person) do
    print(key, "=", value)
end

for i, value in ipairs(colors) do
    print(i, value)
end