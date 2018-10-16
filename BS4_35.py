# count the number of numeric characters in a given string
str = input()
count = 0
for i in str:
    if ord(i)>=ord('0') and ord(i)<=ord('9'):
        count += 1
    else:
        continue
print(count)
