import math

sets = int(input())
ks = []
ms = []

for i in range(sets):
    line = input()
    line = line.split(" ")
    ks.append(int(line[0]))
    ms.append(int(line[1]))

def is_prime(n):
    if n == 0 or n == 1:
        return False
    
    if n == 2:
        return True

    if n % 2 == 0:
        return False

    for i in range(3, math.ceil(math.sqrt(n)), 2):
        if n % i == 0:
            return False
    
    return True

def sqr_num(n):
    num = str(n)
    summy = 0
    for d in num:
        summy = summy + int(d) ** 2
    
    if summy == 1:
        return True

    elif summy < 10:
        return False

    else:
        return sqr_num(summy)

for i in range(sets):
    if not is_prime(ms[i]):
        print(ks[i], ms[i], "NO")

    else:
        if sqr_num(ms[i]):
            print(ks[i], ms[i], "YES")
        else:
            print(ks[i], ms[i], "NO")
