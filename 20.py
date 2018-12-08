import decimal

decimal.getcontext().prec = 1000
from decimal import Decimal

carp = Decimal('1')


def calc_Fact(num):
    global carp
    for i in range(100):
        carp *= num
        num = num - 1
    return carp


num = str(calc_Fact(Decimal('100')))
print()

sum = 0
for s in num:
    sum += int(s)
print(sum)
