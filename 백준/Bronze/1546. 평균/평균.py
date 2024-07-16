num = int(input())
test = list(map(int,input().split()))
max_num = max(test)
n_sum = 0

for i in range(0,num):
    n_sum += (test[i]/max_num) * 100
print(float(n_sum/num))
