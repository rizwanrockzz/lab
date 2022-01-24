#*****************************************************#
# Bubble Sort 
# Using While loop

arr = [5,2,11,1,6,8]
counter = 1
print(arr)
n = len(arr)
while counter<n:
    for i in range(n-counter):
        if arr[i]>arr[i+1]:
            arr[i],arr[i+1] = arr[i+1],arr[i]
            
    counter+=1

print(arr)    

# Using For loop
arr = [64, 34, 25, 12, 22, 11, 90]
print(arr)

n = len(arr)
for i in range(n-1):
	for j in range(0, n-i-1):
		if arr[j] > arr[j + 1] :
			arr[j], arr[j + 1] = arr[j + 1], arr[j]

print(arr)

#*****************************************************#

# Insertion Sort

def insertionSort(arr):
	for i in range(1, len(arr)):
		key = arr[i]
		j = i-1
		while j >=0 and key < arr[j] :
				arr[j+1] = arr[j]
				j -= 1
		arr[j+1] = key


# Driver code to test above
arr = [12, 11, 13, 5, 6]
print(arr)
insertionSort(arr)
print ("Sorted array is:")
print(arr)

#*****************************************************#

# Selection sort

arr = [64, 25, 12, 22, 11]

for i in range(len(arr)):
	min_idx = i
	for j in range(i+1, len(arr)):
		if arr[min_idx] > arr[j]:
			min_idx = j
	
	arr[i], arr[min_idx] = arr[min_idx], arr[i]

print ("Sorted array")
print(arr)
