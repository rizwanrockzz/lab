// Menu driven program

// We have discussed stack operations called push () and pop () in the class. Also illustrated with examples. 
// Design and implement menu driven C program with 4 operations. 
// (1) Add element to stack (2) Delete element from stack (3) Traverse elements and (4) Exit.
// Write all possible examples supported by relevant test cases.   

#include<stdio.h>
#include<stdlib.h>

int tos = 0;
int arr[50] ;

void push(int x){
    if (tos>5){
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

void display(){
    for(int i=1;i<=tos;i++){
        printf("%d\n",arr[i]);
    }
}

int main(){
    int key,x;
    while(1){
        printf("Enter 1,2,3 or 4\n");
        printf("1 push\n");
        printf("2 pop\n");
        printf("3 display\n");
        printf("4 stop\n");
        scanf("%d",&key);

        switch(key){
            case 1:
                if (tos<=5){
                    printf("Enter an element to push : ");
                    scanf("%d",&x);
                    push(x);
                }
                else{
                    printf("Stack Overflow\n");
                }
                break;
            case 2:
                if(tos!=0){
                    printf("Poped element is : %d\n",pop());
                }
                else{
                    printf("Stack is empty\n");
                }
                break;
            
            case 3:
                display();
                break;
            case 4:
                exit(0);
                break;
            
        }
    }

    
    return 0;
}






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

int tos = 0;
char arr[50] ;

void push(char x){
    if (tos>5){
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
        char y = arr[tos];
        tos--;
        return y;
    }
}

void display(){
    for(int i=1;i<=tos;i++){
        printf("%d\n",arr[i]);
    }
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
