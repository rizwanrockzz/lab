# Task-1
'''In a class room the teacher decides to shuffle all the students so that each student collaborates with 
other students too and she also checks that board is visible to all students. In a bench n number of 
students can be seated. She calls the students and makes them stand in a line.
She checks first two person and if the first person is taller than the second person he is put in second 
place and second in first, i.e., their positions are swapped. After swapping, the teacher checks second 
and third person height and if the second person is taller than third person their positions are swapped. 
She repeats this till the end. She finds that the last student is the tallest student after completing one 
iteration.
So she repeats the process for (n-1) times so that all students are sorted. She stops the process in the 
middle as soon as she find that the students are sorted.'''
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