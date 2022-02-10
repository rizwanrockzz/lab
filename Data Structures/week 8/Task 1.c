// Task-1

// We have discussed stack operations called push () and pop () in the class. 
// Also illustrated with examples. Design and implement menu driven C program with 4 operations. 
// (1) Add element to stack 
// (2) Delete element from stack 
// (3) Traverse elements and 
// (4) Exit. 
// Write all possible examples supported by relevant test cases.  
// (Use Dynamic Implementation for character data) 



#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// stack using linked list menu driven char

struct node{
    char data;
    struct node*next;
}*new,*tos,*temp,*helper;

void push(char val){
    new = (struct node*)malloc(sizeof(struct node*));
    printf("Address of %c is : %p\n",val,new);
    new->data = val;
    new->next = NULL;
    if(tos == NULL){
        printf("It is null\n\n");
        tos = new;
    }
    else{
        printf("It is not null\n\n");
        new->next = tos;
        tos = new;
    }
}

void pop(){
    temp = tos;
    printf("Deleted Element is : %c\n",tos->data);
    printf("Freeing the memory of %c Address : %p\n",tos->data,temp);
    tos = tos->next;
    temp->next = NULL;
    free(temp);
}

void display()
{
    helper = tos;
    while (helper != NULL) {
        printf(" %c --> ", helper->data);
        helper = helper->next;
    }
    printf("NULL\n\n");
}

int main()
{
    int key,len;
    char e[50];

    while(1){
        
        printf("Menu driven program for Stack Using Linked List\n");
        printf("1.Insert\n2.Delete\n3.Display\n4.Exit\n");
        printf("Enter your choice : ");
        scanf("%d",&key);
        switch(key){
            case 1:
                printf("Enter a character to push : ");
                scanf("%s",e);
                printf("e is : %c\n",e[0]);
                len = strlen(e);
                for(int i=0;i<len;i++)
                {
                    push(e[i]);
                }
                printf("\n");
                break;
            case 2:
                pop();
                break;
            case 3:
                printf("<-- Characters in stack -->\n");
                display();
                break;
            case 4:
                printf("Thank you!!\nVisit Again..\n");
                exit(0);
                break;
            default:
                printf("Enter a valid choice \n");
                
        }
    }
    
    return 0;
}