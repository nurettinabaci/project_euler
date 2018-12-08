# 1 - sayıyı ters çevirme

def isPalindrome(num):
    orij = num
    ters = 0
    while num > 0:
        kalan = num % 10
        ters = ters * 10 + kalan
        num //= 10
    if ters == orij:
        return True
    else:
        return False


# 100 ile 999 arasındaki iki palindrom sayısı
demet = list()
largest = 0
a = 999
while a > 100:
    b = 100
    while b <= 999:
        if isPalindrome(a * b):
            demet.append(a * b)
        b += 1
    a -= 1

print(str(max(demet)))