l = input()
s = l[0]
for x in range(len(l)):
    if l[x] == "-":
        s += l[x+1]
print(s)