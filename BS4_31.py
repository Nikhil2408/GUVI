# Number of characters in a string except spaces
str = input()
count = 0
for i in str:
    if ord(i)==32:
        continue
    else:
        count+=1
print(count)
