# Count the number of Special characters in a string
str = input()
count = 0
for i in str:
    if (ord(i)>=ord('a') and ord(i)<=ord('z')) or (ord(i)>=ord('A') and ord(i)<=ord('Z')):
        continue
    elif(ord(i)>=ord('1') and ord(i)<=ord('9')):
        continue
    elif ord(i)==32:
        continue
    else:
        count += 1
print(count)
