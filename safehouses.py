n = int(input())
maps = []

for i in range(n):
    maps.append(input())

spy_locs = []
house_locs = []

for i in range(n):
    for j in range(n):
        if maps[i][j] == 'S':
            spy_locs.append((i, j))

        elif maps[i][j] == 'H':
            house_locs.append((i, j))

shortest_dists = []

for i in range(len(spy_locs)):
    temp_dists = []
    for j in range(len(house_locs)):
        temp_dists.append(abs(spy_locs[i][0] - house_locs[j][0]) + abs(spy_locs[i][1] - house_locs[j][1]))
    shortest_dists.append(min(temp_dists))

print(max(shortest_dists))