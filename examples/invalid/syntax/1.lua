-- ОШИБКА: if без then
if x > 10
    print("x > 10")
end

-- ОШИБКА: if без end
if x > 10 then
    print("x > 10")

-- ОШИБКА: while без do
while x < 10
    x = x + 1
end

-- ОШИБКА: repeat без until
repeat
    x = x + 1

-- ОШИБКА: for без do
for i = 1, 10
    print(i)
end

-- ОШИБКА: do без end
do
    x = 10