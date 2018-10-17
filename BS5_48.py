# Given a number n, followed by n numbers print the average of n numbers
import numpy as np
n = int(input().strip())
array1 = list(map(int,input().split(" ")))
print(int(np.mean(array1)))
