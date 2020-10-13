import sys

s = input()
seen = []
words = s.split()

for word in words:
    if word in seen:
        print("no")
        sys.exit()
    else:
        seen.append(word)
    
print("yes")