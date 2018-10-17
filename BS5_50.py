# Given a number n, determine whether it is power of 2
n = int(input().strip())
if n!=0 and (n & (n-1) == 0):
    print("yes")
else:
    print("no")
