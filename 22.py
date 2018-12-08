def calc(name):
    aa = 0
    for letter in name:
        aa += ord(letter) - ord('A') + 1
    return aa


names = open('names.txt').read().replace('"', '').split(',')
names.sort()
a = 0
for i in range(len(names)):
    a += (i + 1) * calc(names[i])
print(a)