# Task-3
'''Its the first day for the students at school and the students enter the class and get seated at random 
places without any height order. So the students who are short and sitting back are not able to see the 
board since they sit behind taller students.
Understanding this difficulty, the teacher decides to make the students sit in height order.
Suppose there are n students in the class. She makes all the students to stand in a line and compares 
the first student's height with the remaining (n-1) students. If the first student's height is greater than 
the ith student, then the taller person goes to the ith place and ith student comes to the first place. 
Again the new first student's height is compared with remaining students and if his height is greater 
than ith student the first student goes to ith place and ith place student comes to first place and this 
goes on till the end.
This process continues for all the students. Finally the students are in height order.
Write a program to perform selection sort on an array of n elements.'''

# Selection sort

arr = [64, 25, 12, 22, 11]

for i in range(len(arr)):
    min_idx = i
    for j in range(i+1, len(arr)):
        if arr[min_idx] > arr[j]:
            min_idx = j

    arr[i], arr[min_idx] = arr[min_idx], arr[i]

print("Sorted array")
print(arr)
