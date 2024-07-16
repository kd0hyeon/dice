def n_sum(n):
    total = 0
    for i in n:
        total += int(i)
    return total

num = input()
count = 0

while len(num) > 1: 
    num = str(n_sum(num))
    count += 1

result = int(num)
print(count)
if result == 3 or result == 6 or result == 9:
    print("YES")
else:
    print("NO")