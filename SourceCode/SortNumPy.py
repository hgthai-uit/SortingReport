import numpy as np

n = input().split()
arr = [float(x) for x in input().split()]
arr = np.array(arr)
sorted_arr = np.sort(arr)
print(sorted_arr)