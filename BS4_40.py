# Given a number N find and print the fibonacci series of N numbers
n = int(input().strip())
a = 1
b = 1
if(n==1):
    print(a)
elif(n==2):
    print(a,b)
else:
    print(a,b,end=" ")
    for i in range(0,n-2):
        c = a+b
        print(c,end=" ")
        a = b
        b = c
