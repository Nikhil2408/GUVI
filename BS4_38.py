# Write a program to swap two numbers using bitwise operators
a,b = input().split(" ")
a = int(a)
b = int(b)
a = a^b
b = a^b
a = a^b
print(a,b)
