###Task-2

# Suppose you are implementing Linear search algorithm using any of the languages like C/Python. In the given 
# array if there is a possibility of multiple occurances of some elements. In such case how to identify the 
# location of the element. Design and implement the solution for the same.

# Sample input :
# Enter number of elements 6
# Enter 6 elements
# 44,16,18,16,47,16
# Enter element to search 16

# Sample output :
# 16 is present at location 1
# 16 is present at location 3
# 16 is present at location 5

## key at multiple indexes

## Program :

n = int(input("Enter no of element : "))
Task = []

for i in range(n):
    e = int(input("Enter number {} : ".format(i+1)))
    Task.append(e)

key = int(input("Enter the key : "))
for j in range(len(Task)):
    if Task[j] == key:
        print("{} is present at location {} ".format(key,j))