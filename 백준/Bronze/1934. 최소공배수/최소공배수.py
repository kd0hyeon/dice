import math
result = []
num = int(input())
for i in range(0,num):
    a, b = map(int,input().split())
    result.append(math.lcm(a,b))
for i in range(0,num):
    print(result[i])