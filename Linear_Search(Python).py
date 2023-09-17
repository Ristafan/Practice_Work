#Linear Search

List = [3, 4, 1, 8, 2, 4]

def LinSearch1(list, obj):
    a = -1
    for i in range(len(list)):
        if list[i] == obj:
            a = i
    
    return a

def LinSearch2(list, obj):
    a = -1
    i = 0
    while i <= len(list):
        if obj == list[i]:
            a = i
            break
        i += 1
    
    return a