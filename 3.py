from decimal import Decimal
n=600851475143
root = Decimal('600851475143').sqrt()
                
root=int(root)

def get_lpf(num, root):
    while num % 2 is 0 and num is not 2:
        num /= 2

    i=3
    while i<root:
        if num%i is 0:
            num/=i

        i+=2
    return num


print(str(get_lpf(n,root)))
#8462696833 ( * 71 )

'''
from euler import primefactors
print max(primefactors(600851475143))
'''