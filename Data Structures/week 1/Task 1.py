### Task-1

# We have discussed linear search algorithm in the class. Implement the same algorithm using any of the
# languages like C/Python. Write all the possible testcases. Write down your observations. 
# Sample input
# Enter number of elements 8
# Enter 8 elements
# 44,16,18,164,47,10,0,-68
# Enter element to search 10
# Sample output
# 10 is present at location 5

## Linear Search

## Program : 

n = int(input("Enter no of element : "))
linear = []
found = False

for i in range(n):
    e = int(input("Enter number {} : ".format(i+1)))
    linear.append(e)

key = int(input("Enter the key : "))
for j in range(len(linear)):
    if linear[j] == key:
        ans = j 
        found = True
        break
        
if found:
    print("{} is present at location {}".format(key,ans))
    
else:
    print("Element not found :(")