def entry_list():
    log =[]
    n = input()
    for e in range(int(n)):
        line = input().split()
        action = line[0]
        name = line[1]

        if action == "entry":
            if name not in log:
                print(name + " entered")
                log.append(name)
            else:
                print(name + " entered (ANOMALY)") 
        else:
            if name not in log:
                print(name + " exited (ANOMALY)")
            else:
                print(name + " exited")
                log.remove(name)

entry_list()