import operator
from functools import reduce

# (m+n)/(m)
# combination:
# fact40/(fact20*fact20)
x = list(range(1, 41))
y = list(range(1, 21))
x = reduce(operator.mul, x)
y = reduce(operator.mul, y)
print(x / y / y)
