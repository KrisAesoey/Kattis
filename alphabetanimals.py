prev = input()
n_animals = input()
n_animals = int(n_animals)

animals = []
valid_animals = []
last_letter = prev[-1]

for i in range(n_animals):
    animals.append(input())
    if last_letter == animals[i][0]:
        valid_animals.append(animals[i])

if len(valid_animals) == 0:
    print("?")

elif len(animals) == 1:
    print(animals[0] + "!")

else:
    winner_animal = ""
    valid_wins = [True for i in range(len(valid_animals))]

    for i in range(len(valid_animals)):
        for j in range(len(animals)):
            if valid_animals[i] == animals[j]:
                continue
            elif valid_animals[i][-1] == animals[j][0]:
                valid_wins[i] = False
                break
        if valid_wins[i]:
            print(valid_animals[i] + "!")
            exit()

    print(valid_animals[0])