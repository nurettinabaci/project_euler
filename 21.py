def divisors(num): return [i for i in range(1, int(num / 2) + 1) if num % i == 0]


demet = dict()
for i in range(1, 10000):
    demet[i] = sum(divisors(i))

#
sum = 0
for i in range(1, 10000):
    if demet.get(demet[i], 0) == i and demet[i] != i:
        sum += i
print(sum)