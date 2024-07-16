def get_index(in_list, find_element):
    return [i for i, value in enumerate(in_list) if value == find_element]


num = int(input())
result = 0
for i in range(0,num):
    sen = list(input())
    count = 0
    for k in range(0, len(sen)):
        sort_list = get_index(sen,sen[k])
        for l in range(0, len(sort_list)-1):
            if sort_list[l+1] - sort_list[l] != 1:
                count +=1

    if count == 0:
        result += 1
        
print(result)
        