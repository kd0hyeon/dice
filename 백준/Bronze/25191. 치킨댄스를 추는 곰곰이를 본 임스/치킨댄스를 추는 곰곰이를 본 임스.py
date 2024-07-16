chicken = int(input())
coke, beer = map(int,input().split())
beverage = (coke/2)+beer
if chicken >= beverage:
    print(int(beverage))
else:
    print(chicken)