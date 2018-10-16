# Count the number of words in a given line
str = input()
count = 0
# This loop will count the number of spaces in the sentence
for i in str:
    if ord(i)==32:
        count+=1
    else:
        continue
print(count+1)
