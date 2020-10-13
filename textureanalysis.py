def text():
    run = 0
    cont = 0
    finalCount = 0
    kris= True
    while(True):
        run +=1
        line = input().split()
        for e in line:
            if e == ".":
                cont +=1
            elif e == "*":
                if finalCount == 0 or finalCount < cont:
                    finalCount = cont
                if cont != finalCount:
                    print(str(run) + " NOT EVEN")
                    kris = False
                    break
        if (kris):
            print(str(run) + " EVEN")

text()