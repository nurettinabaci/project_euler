bound = 4000000
sum = 0
a = 1
b = 1
while b < bound:
    if b % 2 == 0:
        sum += b
        print(sum,end=' ')
    h=a+b
    a=b
    b=h
print("\n" + str(sum))
