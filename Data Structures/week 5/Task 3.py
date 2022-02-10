# Task-3
# You have an empty sequence, and you will be given 
# queries. Each query is one of these three types:
# 1  Push the element x into the stack.
# 2  Delete the element present at the top of the stack.
# 3  Print the maximum element in the stack.
# Function Description 
# Complete the getMax function in the editor below. 
# getMax has the following parameters: 
# - string operations[n]: operations as strings 
# Returns 
# - int[]: the answers to each type 3 query 
# Input Format
# The first line of input contains an integer,  The next lines each contain an above mentioned query. 



tos = -1
arr = []
maxele = []
n = int(input("No of operations : "))

for i in range(n):
    e = input()
    e = list(map(int,e.split()))

    
    if e[0]==1:
        arr.append(e[1])
    elif e[0]==2:
        arr.pop()
    elif e[0]==3:
        maxele.append(max(arr))
print("The output from the above given commands is\n")
for j in maxele:
    print(j)
    

        
