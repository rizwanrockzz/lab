#prime factors
def Prime(n):
	if n==4:
		return false
	count = 0
	for i in range(2,n//2):
		if n%i==0:
			return false
	return True
n = int(input("Enter a number : "))
factors = []
for i in range(2,n):
	if n%i==0:
		factors.append(i)
print(factors)
pro = 1
for j in factors:
	if Prime(j):
		pro*=j
print("The product of prime factors is : ",pro)


# Legenders
def Prime(n):
	if n==4:
		return false
	count = 0
	for i in range (2,n//2):
		if n%i==0:
			return false
	return True

n = int(input("Enter a number : "))
for i in range(n*n, (n+1)*(n+1)):
	if Prime(i):
		print(i)

        
# Pangram
n = input()
print(n)
l = [0,1,2,3,4,5,6,7,8,9]
ans []
for i in n:
	if int(i) in l:
		ans.append(int(i))
ans = list(set(ans))
ans.sort()
print(ans)
if ans == l:
	print("Pangram"
else:
	print("Not Pangram")
          

# Rotational 
s1 = input("Enter string 1: ")
s2 = input("Enter string 2 : ");
s1 = list(s1) 
s2 = list(S2) 
check = False 
n = len(1)
i = 1 
while i<=n:
	arr = s1[-i:]+s1[:n-i] 
	if arr == s2:
		check = True
		break 
    i = i+1
          
if check:
	print("True") 
else:
	print("False")


# extract number from string

a = input()
a = a+"a"
n = len(a)
s = ""
for i in range(n-1):
    if a[i]>="a":
        pass
    else:
        if a[i+1]>="a":
            s = s+a[i]+" "
        else:
            s = s+a[i]
            
ans = s.split(" ")
ans.remove("")
for i in range(len(ans)):
    ans[i] = int(ans[i])
print(ans)
print(s)
print(max(ans))

    


    
