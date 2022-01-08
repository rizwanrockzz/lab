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
        
        
        
        

###Task-3

# Rithick gets a lottery ticket and checks each number in the list to see whether he has won the lottery or 
# not. Since there are many numbers,he finds it tedious to check each ticket number manually. So he decides 
# to write a code to check whether he has won the lottery or not. Help Rithick write a code to find his 
# lottery ticket number from the given ticket numbers.

# Input Format:
# First line of the input consists of n, that corresponds to total number of lottery tickets.
# Next n lines consists of Integers, that corresponds to the given lottery ticket numbers.
# Last line consists of an Integer 'l', which corresponds to Rithick's lottery ticket number.

# Output Format:
# Output consists of string "Congratulations! You have won the lottery" or "Sorry your ticket number is not 
# there. Better luck next time", according to the search result.
# Sample Input and Output:
# [All text in bold corresponds to input and the rest corresponds to output]
# Enter the total number of tickets:
# 5
# Enter the ticket number 1:
# 4521
# Enter the ticket number 2:
# 3589
# Enter the ticket number 3:
# 147852
# Enter the ticket number 4:
# 2365
# Enter the ticket number 5:
# 8965
# The ticket numbers are:
# 4521 3589 147852 2365 8965
# Enter the ticket number to be searched:
# 8965
# The ticket number 8965 is found at position 5
# Congratulations!You have won the lottery

## Lottery tickets

## Program : 

n = int(input("Enter no of element : "))
Lottery = []
found = False

for i in range(n):
    e = int(input("Enter the ticket number {} : ".format(i+1)))
    Lottery.append(e)

print("The ticket numbers are : ")
print(Lottery)

l = int(input("Enter the ticket number to be searched : "))
for j in range(len(Lottery)):
    if Lottery[j] == l:
        found = True
        ans = j 
        break
    
if found:
    print("The ticket number {} is found at position {}".format(l,ans+1))
    print("Congratulations!You have won the lottery")
    
else:
    print("Sorry your ticket number is not there. Better luck next time")
        
