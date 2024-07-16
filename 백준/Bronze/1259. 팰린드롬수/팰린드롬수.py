while True:
    num = list(map(int,input()))
    len_num = len(num)
    count = 0
    if num[0] == 0:
        break
    elif len_num % 2 == 0:
        for i in range(0,len_num):
            if num[i] == num[-i-1]:
                count += 1
        if count == len_num:
            print("yes")
        else:
            print("no")
            
    elif len_num % 2 == 1:
        for i in range(0,len_num):
            if num[i] == num[-i-1]:
                count += 1
        if count == len_num:
            print("yes")
        else:
            print("no")