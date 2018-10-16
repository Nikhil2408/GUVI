#Count the number of lines in a given paragraph
str = input()
cnt = 1
for i in str:
    if ord(i)==ord('.'):
        cnt += 1
    else:
        continue
print(cnt)
