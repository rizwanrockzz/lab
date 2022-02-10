### Task-3
''' Given an Array A of N  of integers.You have to find number of subarrays having Primicity less than or equal to K 
Primicity of sub-array is defined an number of primes in that subarray.
Input:
First line contains N  and K
Second line contains N  integers.
Output:
Print the Number of sub-arrays having Primicity<= K 
'''

# PRIMICITY

## Program : 

def prime(num):
    flag = True
    for i in range(2, num):
        if (num % i) == 0:
            flag = False
            break
    return flag

def sub_lists (l):
    lists = [[]]
    for i in range(len(l) + 1):
        for j in range(i):
            lists.append(l[j: i])
    return lists


n = int(input("Enter N : "))
k = int(input("Enter K : "))

arr = []
for i in range(n):
    e=int(input("Enter element {} : ".format(i+1)))
    arr.append(e)
    
print(arr)
temp = sub_lists(arr)
print(temp)

count=[]
ans = []

for i in temp:
    for j in i:
        if prime(j):
            count.append(j)

    if len(count)<=k:
        ans.append(i)
    
    count = []
    
print(ans)
print("The no of subarrays : {}".format(len(ans)))


