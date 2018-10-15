# Given a number N and an array of N elements, print each element with it's index
n = int(input().strip())
arr = list(map(int,input().split(" ")))
for i in range(0,n):
    print(arr[i],i)
