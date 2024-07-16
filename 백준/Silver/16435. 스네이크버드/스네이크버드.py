num,size = map(int,input().split())
fruit = list(map(int,input().split()))
fruit.sort()
for i in range(0,len(fruit)):
    if size >= fruit[0]:
        size += 1
        del fruit[0]
print(size)