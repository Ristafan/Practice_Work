#BinSearch

Array = [1, 3, 5, 7, 9]

def BinSearch(list, nmb):
    r = len(list)-1
    l = 0
    m = int((l+r)/2)

    while list[m] != nmb and l < r:
        if list[m] < nmb:
            l = m+1
        if list[m] > nmb:
            r = m
        m = int((l+r)/2)

    if list[m] == nmb:
        return m
    else: return -1


a = BinSearch(Array, 1)
print("The number you were looking for is in space %d", a)