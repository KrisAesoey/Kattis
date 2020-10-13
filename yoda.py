x = input()
y = input()

x_answer = ""
y_answer = ""

x = x[::-1]
y = y[::-1]

if len(x) > len(y):
    y += "0" * (len(x) - len(y))

else:
    x += "0" * (len(y) - len(x))

x = x[::-1]
y = y[::-1]

for i in range(len(x)-1, -1, -1):
    if int(x[i]) > int(y[i]):
        x_answer += x[i]

    elif int(x[i]) < int(y[i]):
        y_answer += y[i]

    else:
        x_answer += x[i]
        y_answer += y[i]

x_answer = x_answer[::-1]
y_answer = y_answer[::-1]

if len(x_answer) == 0:
    print("YODA")

elif int(x_answer) == 0:
    print(0)

else:
    print(int(x_answer))

if len(y_answer) == 0:
    print("YODA")

elif int(y_answer) == 0:
    print(0)

else:
 print(int(y_answer))