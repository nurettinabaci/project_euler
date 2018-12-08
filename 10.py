from functools import reduce
from operator import mul

nums = list()

for num in range(900, 1000):
    # prime numbers are greater than 1
    if num > 1:
        for i in range(2, num):
            if (num % i) == 0:
                break
        else:
            nums.append(num)
            print(num)

print(reduce(mul, nums))
