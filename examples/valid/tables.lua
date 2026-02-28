-- Таблица как массив
local colors = {"red", "green", "blue"}
print(colors[1])  -- red
print(colors[2])  -- green
print(colors[3])  -- blue

-- Добавление элемента в массив
colors[4] = "yellow"

-- Подсчет длины массива (ручной способ)
function table_length(t)
    local i = 1
    while t[i] ~= nil do
        i = i + 1
    end
    return i - 1
end

print("Длина массива:", table_length(colors))

-- Таблица как словарь
local person = {
    name = "John",
    age = 30,
    city = "New York"
}
print(person.name)
print(person["age"])

-- Смешанная таблица
local data = {
    "first",
    key = "value",
    [10] = "ten",
    nested = { x = 1, y = 2 }
}

-- Обход таблицы
for key, value in pairs(person) do
    print(key, "=", value)
end

-- Обход массива
for i, value in ipairs(colors) do
    print(i, value)
end