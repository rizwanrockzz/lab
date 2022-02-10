### Task-2
'''Once there lived a king and a queen. They were very rich and led a happy life. 
 The King's brother Humayun was jealous of him and he wanted to become the King. So in order to become the King, Humayun carries the Queen away and keeps her in a jail which are numbered in sorted sequence.
Humayun informs the King that he took away the Queen and if the King agrees him to become the King, he would leave the Queen. The King has a special power of flying. He flies and reaches the place where Humayun has hidden the Queen and Humayun has given clue to King about the jail number of the Queen. Luckily the King finds the key of the jail where the Queen is locked.But Humayun might have tried to fool the King by saying wrong jail number of Queen. The King already knew how many jails were there. He reaches the centre jail and checks whether the jail number and the key number are equal. He also carries a small machine with him to find the next jail to be visited by him. The machine initially contains the low(low=1) and the high value(high=total number of jails), and calculates the mid value (the jail which is to be visited). If the mid value and key value are equal, the King opens the lock and takes the Queen away with him. If the key number is greater than the mid value, the King increases the mid value by 1 in the machine and assigns it to the low value. If the key number is less than the mid value, the King decreases the mid value by 1 in the machine and assigns it to the high value. The King does this until he finds that the key value and the mid value to be equal.
Sample Input and Output1:
Enter the total number of jails in Humayun's Place:
5
Enter the jail number 1
6
Enter the jail number 2
89
Enter the jail number 3
91
Enter the jail number 4
105
Enter the jail number 5
200
Enter the clue given by Humayun:
105
Hurray!The King rescued the Queen

Sample Input and Output 2:
Enter the total number of jails in Humayun's Place:
6
Enter the jail number 1
56
Enter the jail number 2
68
Enter the jail number 3
156
Enter the jail number 4
196
Enter the jail number 5
204
Enter the jail number 6
895
Enter the clue given by Humayun:
4
The King has been fooled by Humayun
'''

# KINGS WIFE SEARCH

##Program

def kingsWifeSearch(arr,n,key):
    
    low = 1
    high = n
    
    while(low<=high):
        
        mid = (low+high)//2
        
        if (arr[mid] == key):
            return mid
            
            
        elif (arr[mid] > key):
            high = mid-1
            
        else:
            low = mid+1

    return -1


n = int(input("Enter the total number of jails in Humayun's Place : "))
jailNo = []

for i in range(1,n+1):
    e=int(input("Enter the jail number {} : ".format(i)))
    jailNo.append(e)

print(jailNo)    

clue = int(input("Enter the clue given by Humayun : "))

ans = kingsWifeSearch(jailNo,n,clue)

if ans!=-1:
    print("Hurray!The King rescued the Queen")
    
else:
    print("The King has been fooled by Humayun")