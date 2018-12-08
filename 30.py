def calc(number, power):
    num = number
    a = []
    total = 0
    while num > 0:
        a.append(int(num % 10))
        num = int(num / 10)
    if sum([pow(i, power) for i in a]) == number:
        return number
    else:
        return 0

a2 = 0
for i in range(2, 200000):
    z = calc(i, 5)
    if z != 0:
        print(z)
        a2 += z
print(a2)
