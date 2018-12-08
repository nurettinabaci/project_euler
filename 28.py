n = 3
total = 1
for i in range(1, 501):
    total += 4 * n * n - 12 * i
    n += 2
print(total)
#1001 = 502*2 - 1