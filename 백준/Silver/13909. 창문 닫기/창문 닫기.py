num = int(input())
count = 0
mul = 1
x = 1
while x <= num:
     count += 1
     x = x + (2*mul) + 1
     mul += 1
print(count)