# Given a number n and an array of n elements as input. Print the median value
n = int(input().strip())
arr1 = list(map(int,input().split(" ")))
count = len(arr1)
arr1.sort()
if(count%2!=0):
    median =arr1[count//2]
else:
    median = (arr1[count//2]+arr1[count//2-1])/2
print(median)
