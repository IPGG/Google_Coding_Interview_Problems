import numpy as np
n = int (input("Enter the size n*n : "))
arr = np.array([[int(x) for x in input(f"Enter the value{[i]}:").split()] for i in range(n)])

print(arr)

print()

arr = np.rot90(arr, k=3)
print(arr)