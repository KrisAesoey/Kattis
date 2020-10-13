def sum():
    x = int(input())
    for q in range(x):
        s = input()
        s = list(s)
        lengden = len(s)
        s.reverse()

        for i in range(lengden):
            if i % 2 == 1:
                n = int(s[i])
                n *= 2
                if n > 9:
                    n = str(n)
                    n = list(n)
                    n = int(n[0]) + int(n[1])

                s[i] = n
        total = 0
        for e in s:
            total += int(e)
        if (total % 10 == 0):
            print("PASS")
        else:
            print("FAIL")
sum()