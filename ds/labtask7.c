// Task-1

// In a class room we have discussed the stack operations called push() and pop(). 
// Based on these operations design and implement the solution to identify the 
// balanced and un-balanced expressions.
// Sample Input-1
// The expression like [(a+b)(a-b)] 
// Sample output-1
// is known to be balanced
// Sample Input-2
// The expression like [(a+b)(a-b] is known to be un-balanced
// Sample output-2
// is known to be un-balanced


#include <stdio.h>
#include <string.h>

int tos = -1;
char arr[50] ;

void push(char x){
    tos++;
    arr[tos] = x;
}

int main()
{
    int ans=1;
    char word[50];
    printf("Enter an expression : ");
    scanf("%s",word);
    printf("%s\n\n",word);
    int len = strlen(word);
    for(int i=0;i<len;i++){
        if(word[i]=='(' || word[i]=='['){
            push(word[i]);
        }
        else if(word[i]==')'){
            char x = arr[tos];
            printf("(  arr[tos] : %c\n\n",x);
            
            if(x =='(' && tos!=-1 ){
                ans =1; 
                tos--; //pop
            }
            else{
                tos--; //pop
            }
        }
        else if(word[i]==']'){
            char x = arr[tos];
            printf("[  arr[tos] : %c\n\n",x);
            
            if(x =='[' && tos!=-1 ){
                ans=1 ;
                tos--; //pop
            }
            else{
                tos--; //pop
            }

        }
    }
    
    for(int i=0;i<tos;i++){
        printf("%c ",arr[i]);
    }
    
    if(ans && tos ==-1){
        printf("Balanced Expression");
    }
    else{
        printf("Unbalanced Expression");
    }
    

    return 0;
}

