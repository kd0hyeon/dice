array = []

for c in range(0,9):
    array.append(int(input()))

def seven_members(arr):
    for i in range(0,9):
        for k in range(0,8):
            a = arr[i]
            del arr[i]
            b = arr[k]
            del arr[k]
            num = sum(arr)
            if num == 100:
                return arr
            else:
                array.insert(k,b)
                array.insert(i,a)

array = seven_members(array)
for i in range(0,7):
    print(array[i])