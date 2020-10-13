n_m = input()
n = int(n_m[0])
m = int(n_m[2])

fontan = []

for i in range(n):
    fontan.append(input())

prev_f = fontan.copy()

while(True):
    for i in range(n-1):
        for j in range(m-1):
            if fontan[i][j] == "V":
                if fontan[i+1][j] == ".":
                    fontan[i+1][j] = 'V'
                elif fontan[i+1][j] == "#":
                    fontan[i][j-1] = 'V'
                    fontan[i][j+1] = 'V'

    same = True

    for i in range(n):
        for j in range(m):
            if (fontan[i][j] != prev_f[i][j]):
                same = False

    if same:
        for e in fontan:
            print(e)
        break