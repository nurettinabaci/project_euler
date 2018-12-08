

def recli(num):
    if num == 1:
        demet.append(1)
        return demet
    elif num % 2 == 0:
        demet.append(num)
        recli(num / 2)
    else:
        demet.append(num)
        recli(3 * num + 1)


uzunluk = dict()

for i in range(1000000, 750000, -1):
    demet = list()
    recli(i)
    uzunluk[i] = len(demet)

print(max(uzunluk, key=uzunluk.get))
