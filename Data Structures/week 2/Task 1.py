## Task-1
'''We have discussed Binary search algorithm in the class. Implement the same algorithm using any of the languages like C/Python. Write all the possible testcases. Write down your observations. 
Sample input
Enter number of elements 8
Enter 8 elements
44,16,18,164,47,10,0,-68
Enter element to search 10
Sample output
10 is present at location 5
'''

# BINARY SEARCH

##program : 

def binarySearch(arr,n,key):
    
    low = 0
    high = n-1
    
    while(low<=high):
        
        mid = (low+high)//2
        
        if (arr[mid] == key):
            return mid
            
            
        elif (arr[mid] > key):
            high = mid-1
            
        else:
            low = mid+1

    return -1


n = int(input("No of elements : "))
arr = []

for i in range(n):
    e=int(input())
    arr.append(e)

arr.sort() 
print(arr)    

key = int(input("Enter the key : "))

ans = binarySearch(arr,n,key)

if ans!=-1:
    print("{} is present at location {}".format(key,ans))
    
else:
    print("Element not found")