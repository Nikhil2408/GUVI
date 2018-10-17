# Compare two strings and print the larger
str1,str2 = input().split(" ")
if len(str1)==len(str2):
    print(str1)
elif len(str1)>len(str2):
    print(str1)
else:
    print(str2)
