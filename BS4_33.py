#Count the number of spaces in a given line
str = input()
count = 0
for i in str:
    if ord(i)==32:
        count+=1
    else:
        continue
print(count)
