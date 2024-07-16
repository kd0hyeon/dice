array = list(input())
Alpha = ['A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z']
changed_Alpha = []
for i in array:
  index = Alpha.index(i)
  changed_Alpha.append(Alpha[index - 3])
print("".join(changed_Alpha))