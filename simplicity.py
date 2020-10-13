alp = ['a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm',
        'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z']
ls = [0] * 26

s = input()

l = 0
r = 0

for x in s:
    for i in range(26):
        if x == alp[i]:
            ls[i] += 1
            if ls[i] == 1:
                l += 1

for i in range(26):
        if ls[i] == 0:
            ls[i] = 101

if l < 3:
    print(0)

else:
    i = 0
    while (l > 2):
        if (i > 25):
            i = 0
        else:
            if (ls[i] == min(ls) and l > 2):
                l -= 1
                r += ls[i]
                ls[i] = 101
                i = 0
            i += 1
    print(r)        