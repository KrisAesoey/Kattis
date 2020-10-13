import math

n = int(input())

tb = 0
lr = 0

for x in range(n):
    s = input()
    if s[0] == "0":
        tb += 1
    if s[1] == "0":
        tb += 1
    if s[2] == "0":
        lr += 1
    if s[3] == "0":
        lr += 1

t = math.floor(min(tb, lr) / 2)
tb = tb - t * 2
lr = lr - t * 2
print(t)
print(tb)
print(lr)