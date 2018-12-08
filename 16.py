
import decimal
decimal.getcontext().prec = 1000
from decimal import Decimal

x = Decimal('2')
# print(x**Decimal('1000'))

demet = str((x ** Decimal('1000')))
demet = str(demet)

sum = 0
for s in demet:
    sum += int(s)
print(sum)
