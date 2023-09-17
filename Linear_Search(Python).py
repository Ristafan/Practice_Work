#Linear Search

List = [3, 4, 1, 8, 2, 4]

def LinSearch1(list, obj):
    a = -1
    for i in range(len(list)):
        if list[i] == obj:
            a = i
    
    return a