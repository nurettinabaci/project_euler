import math
from decimal import Decimal

with open('sayilar.txt') as file:
    lines = file.readlines()
    aa = Decimal('0')
    for line in lines:
        aa = aa + Decimal(line)



bb=str(aa)
print(bb[0:11])