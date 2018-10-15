# Sorting a list
# .sort() is a hybrid sort
# .sort() uses TimSort which was developed in 2002 by Tim Peters for use in Python Language
# It's a combination of Merge Sort and Insertion Sort
n = int(input().strip())
arr1 = list(map(int,input().split(" ")))
arr1.sort()
print(arr1)
