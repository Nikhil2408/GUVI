# Given a number n, followed by n numbers, find the max and min in array
n = int(input().strip())
array1 = list(map(int,input().split(" ")))
print(min(array1),max(array1))
