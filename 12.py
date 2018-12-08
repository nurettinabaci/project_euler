i = 1
j = 0
global check
check = True


def calcDivisors(num):
    divisorList = list()
    count = 0
    for x in range(1, int(num/2 + 1)):
        if (num % x) == 0:
            divisorList.append(x)
    if len(divisorList) > 500:
        print(num)
        return False
    else:
        print(len(divisorList))
        return True

while (check):
    j += i
    i += 1
    check = calcDivisors(j)
