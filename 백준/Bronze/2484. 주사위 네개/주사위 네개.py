N = int(input())
result = []
max = 0
for i in range(N):
    num = list(map(int, input().split()))
    count = 0
    num_index = []
    if num[0] == num[1] == num[2] == num[3]:
        result.append(50000 + num[0]*5000)
        count = 1

    for k in range(1,7):
        if num.count(k) == 3:
            result.append(10000+k*1000)
            count = 1
        elif num.count(k) == 2:
            count += 2
            num_index.append(k)

    if count == 2:
        result.append(1000+num_index[0]*100)
    elif count == 4:
        result.append(2000+num_index[0]*500+num_index[1]*500)
    elif count < 1:
        max = num[0]
        for i in range(0,4):
            if max < num[i]:
                max = num[i]
        result.append(max*100)

max = result[0]
for i in range(N):
    if max < result[i]:
        max = result[i]
print(max)