votes = {}

while(True):
    name = input()
    if len(name) == 3:
        break
    if name in votes:
        votes[name] += 1
    else:
        votes[name] = 1

winners = sorted(votes, key=lambda x:votes[x])


if votes[winners[-1]] == votes[winners[-2]]:
    print("Runoff!")
else:
    print(winners[-1])