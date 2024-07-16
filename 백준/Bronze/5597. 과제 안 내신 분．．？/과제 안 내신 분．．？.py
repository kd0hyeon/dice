a = []
a_class = []
no_here = []
for i in range(1,31):
    a.append(i)
    if (i > 2):
        a_class.append(int(input()))

for i in range(0,30):
    if a[i] in a_class:
        continue
    else:
        no_here.append(a[i])

if no_here[0] > no_here[1]:
    print(no_here[1])
    print(no_here[0])
else:
    print(no_here[0])
    print(no_here[1])