// Task-2
// Design and implement C program to check a string is palindrome or not using a stack. A stack is LAST IN FIRST OUT (LIFO) data structure. 
// The element which is inserted last, is accessed first. Insertion and deletion of elements happens only at top of the Stack. 
// The sequence of exit of elements from a stack is reverse of the sequence of their entry in stack.
// Sequence of Entry.
// A --> B --> C -- > D --> E
// Sequence of Exit.
// E --> D --> C --> B --> A
// Algorithm to check palindrome string using stack 
// Find the length of the input string using strlen function and store it in a integer variable "length".
// Using a for loop, traverse input string from index 0 to length-1 and push all characters in stack.
// Remove (Pop) characters from stack one by one using a for loop and compare it with corresponding character of input string 
// from beginning(traverse from index 0 to length-1). If we found a mismatch the input string is not a palindrome string otherwise palindrome string.


#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int tos = -1;
char arr[50] ;

void push(char x){

    tos++;
    arr[tos] = x;
}

int pop(){

    char y = arr[tos];
    tos--;
    return y;
}


int main(){
    int check,key;
    char word[50];
    
    // printf("%s", word);
    // printf("\nName length: %u", length);
    
    while(1){
        printf("1.Check string is palindrome\n");
        printf("2.exit\n");
        printf("Choose Operation : ");
        scanf("%d",&key);
        
        switch(key){
            case 1:
                printf("Enter string : ");
                scanf("%s",word);
                
                int length = strlen(word);
                
                for(int i=0;i<length;i++){
                    push(word[i]);
                }
    
                for(int i=0;i<length;i++){
                    char a = pop();
                    if (a != word[i]){
                        check = 0;
                        break;
                    }
                }
                
                if (check==0){
                    printf("%s is not a palindrome\n",word);
                }
                else{
                    printf("%s is a palindrome\n",word);
                }
                break;
                
            case 2:
                exit(0);
        }
        
    }
    
    return 0;
}
