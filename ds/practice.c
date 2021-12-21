// Task-3
// You have an empty sequence, and you will be given 
// queries. Each query is one of these three types:
// 1-Push the element x into the stack.
// 2-Delete the element present at the top of the stack.
// 3-Print the maximum element in the stack.


#include<stdio.h>
#include<stdlib.h>
#include<string.h>

// int tos = 0;
// char arr[50] ;

// void push(char x){
//     if (tos>5){
//         printf("Stack Overflow");
//     }
//     else{
//         tos++;
//         arr[tos] = x;
//     }
// }

// int pop(){
//     if(tos<=0){
//         printf("Stack empty");
//     }
//     else{
//         char y = arr[tos];
//         tos--;
//         return y;
//     }
// }

// void display(){
//     for(int i=1;i<=tos;i++){
//         printf("%d\n",arr[i]);
//     }
// }

int main(){
    int check,key,n,count=0;
    char word[50];
    printf("1.Push the element x into the stack\n");
    printf("2.Delete the element present at the top of the stack\n");
    printf("3.Print the maximum element in the stack\n\n\n");
    //printf("Enter the no of operations : ");
    // scanf("%d",&n);
    // char operations[n];
    
    // for(int i=0;i<n;i++){
    //     printf("Enter String %d : ",i+1);
    //     // scanf("%[^\n]%*c",operations);
    //     fgets(operations,sizeof(operations),stdin);
    //     printf("%s  \n",operations);
    // }
       
    char strs[5][30] = {0};
    for (int i = 0; i < 7; i++)
    {
        printf("Enter String %d :",i+1);
        gets(strs[i]);
    }
    
     for (int i = 0; i < 7; i++)
    {
        puts(strs[i]);
    }
    
    
    return 0;
}









# # 1   -Push the element x into the stack.
# # 2    -Delete the element present at the top of the stack.
# # 3    -Print the maximum element in the stack.

# tos = -1
# arr = []

# def push(x):
#     global tos
#     tos+=1 
#     arr[tos] = x 
    
# def pop():
#     global tos
#     tos-=1 

# operations  = []
   
# n = int(input("No of operations : "))

# for j in range(n):
#     operations.append(input())
# print("arr : ",arr)  

# print(operations)
# for i in range(n):
#     print("i : ",i)
#     if operations[i][0]=='1':
#         b,c = operations[i].split()
#         push(c)
#         print("arr : ",arr)
    
#     elif operations[i][0]=='2':
#         # tos-=1 
#         pop()
        
#     elif operations[i][0]=='3':
#         op3 = max(arr)
        
# print(op3)

# # a = ['1 97', '2', '1 20', '2', '1 26', '1 20', '2', '3', '1 91', '3']
# # print(a[0][0])
# # b,c=a[0].split()
# # print(b,c,sep="   ")

print(" "-"0")
        
    
    
    
    
    
    
    
    
    
