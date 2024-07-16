num = int(input())
sort_list = []
for i in range(0,num):
     temp = list(map(int,input().split()))
     sort_list.append(temp)
sort_list.sort()
for k in range(0,len(sort_list)):
    print(sort_list[k][0], sort_list[k][1])