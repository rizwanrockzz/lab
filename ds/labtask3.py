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





# Quick Sort

# This function takes last element as pivot, places
# the pivot element at its correct position in sorted
# array, and places all smaller (smaller than pivot)
# to left of pivot and all greater elements to right
# of pivot


def partition(arr, low, high):
	i = (low-1)		 # index of smaller element
	pivot = arr[high]	 # pivot

	for j in range(low, high):

		# If current element is smaller than or
		# equal to pivot
		if arr[j] <= pivot:

			# increment index of smaller element
			i = i+1
			arr[i], arr[j] = arr[j], arr[i]

	arr[i+1], arr[high] = arr[high], arr[i+1]
	return (i+1)

# The main function that implements QuickSort
# arr[] --> Array to be sorted,
# low --> Starting index,
# high --> Ending index

# Function to do Quick sort


def quickSort(arr, low, high):
	if len(arr) == 1:
		return arr
	if low < high:

		# pi is partitioning index, arr[p] is now
		# at right place
		pi = partition(arr, low, high)

		# Separately sort elements before
		# partition and after partition
		quickSort(arr, low, pi-1)
		quickSort(arr, pi+1, high)


# Driver code to test above
arr = [10, 7, 8, 9, 1, 5]
n = len(arr)
quickSort(arr, 0, n-1)
print("Sorted array is:")
print(arr)
