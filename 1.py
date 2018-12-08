sum = 0
for i in range(0, 1001):
    if i % 5 == 0 or i % 3 == 0:
        sum += i
print(str(sum))  # 234168
