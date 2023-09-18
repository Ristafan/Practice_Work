#Recursion

def DrawLine(numbr):
    if numbr == 0:
        return 0
    print(numbr*"-")
    DrawLine(numbr-1)


DrawLine(5)