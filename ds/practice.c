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










    //   scanf("%d",&key);
        
    //     switch(key){
    //         case 1:
    //             printf("Enter string : ");
    //             scanf("%s",word);
                
    //             int length = strlen(word);
                
    //             for(int i=0;i<length;i++){
    //                 push(word[i]);
    //             }
    
    //             for(int i=0;i<length;i++){
    //                 char a = pop();
    //                 if (a != word[i]){
    //                     check = 0;
    //                     break;
    //                 }
    //             }
                
    //             if (check==0){
    //                 printf("%s is not a palindrome\n",word);
    //             }
    //             else{
    //                 printf("%s is a palindrome\n",word);
    //             }
    //             break;
    //         case 2:
    //             if(tos!=0){
    //                 printf("Poped element is : %d\n",pop());
    //             }
    //             else{
    //                 printf("Stack is empty\n");
    //             }
    //             break;

    //         case 2:
    //             exit(0);
                
    //     }
    //     count++;


















// Task 2

#include <stdio.h>
#include<string.h>

// Postfix Evaluation

int tos = 0;
int arr[50] ;

void push(int x){
    if (tos>=7){
        printf("Stack Overflow");
    }
    else{
        tos++;
        arr[tos] = x;
    }
}

int pop(){
    if(tos<=0){
        printf("Stack empty");
    }
    else{
        int y = arr[tos];
        tos--;
        return y;
    }
}


int main()
{
    char word[50];
    int val1,val2,ans,x,y;
    
    scanf("%s", word);
    int length = strlen(word);
    
    for(int i=0;i<length;i++){
        printf("%c ",word[i]);
        if(word[i]>='0' || word[i] <='9' ){
            printf("%d  \n",word[i]-'0');
            push(word[i]-'0');
        }
        else{
            val2 = pop();
            val1 = pop();
            printf("%d  %d",val1,val2);
            x = val1;
            y = val2;
            switch(word[i]){
                
                case '+':
                    printf("+ %d",x+y);
                    push(x+y);
                    break;
                    
                case '-':
                    printf("- %d",x-y);
                    push(x-y);
                    break;
                    
                case '*':
                    printf("* %d",x*y);
                    push(x*y);
                    break;
                
                case '/':
                    printf("/ %d",x/y);
                    push(x/y);
                    break;
            }
        }
        
        
    }
    printf("Elements : ");
    for(int i=1;i<=length;i++){
        printf("%d ",arr[i]);
    }
    printf("ans is : %d\n",arr[0]);

// 53+82-*
    return 0;
}
