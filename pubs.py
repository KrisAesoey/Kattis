n, m = map(int, input().split())

if (n == 1 or m == 0):
    print("impossible")

else:
    l = ["none"] * n

    for i in range(m):
        x, y = map(int, input().split())
        if (y < x) :
            x, y = y, x

        if l[x-1] == "none" and l[y-1] == "none":
            l[x-1] = "pub"
            l[y-1] = "house"

        elif l[x-1] == "pub" and l[y-1] == "none":
            l[y-1] = "house"

        elif l[x-1] == "house" and l[y-1] == "none":
            l[y-1] = "pub"
        else:
            continue

    for x in l:
        print(x)