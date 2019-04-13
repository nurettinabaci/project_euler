import decimal
decimal.getcontext().prec = 3001
from decimal import Decimal



sum=Decimal('0')
mein = list()
for i in range(1,1001):
    #print(str(Decimal(i) ** Decimal(i)))
    sum += Decimal(i) ** Decimal(i)
print(sum) # 9110846700