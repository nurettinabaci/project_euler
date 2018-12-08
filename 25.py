import decimal

decimal.getcontext().prec = 1000
Decimal = decimal.Decimal
phi = (1 + Decimal('5') ** Decimal('0.5')) / 2
i = 1
while True:
    num = round((phi ** (i + 1) - (-phi) ** (-i - 1)) / (Decimal('5') ** Decimal('0.5')))

    i += 1
    if len(str(num)) >= 1000:
        print(num)
        print(i)
        break
