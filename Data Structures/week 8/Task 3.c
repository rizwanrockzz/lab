// Task-3

// We have discussed stack operations called push () and pop () in the class. 
// Also illustrated with examples. Design and implement menu driven C program with 4 operations. 
// (1) Add element to stack 
// (2) Delete element from stack 
// (3) Traverse elements and 
// (4) Exit. 
// Write all possible examples supported by relevant test cases.  
// (Use Dynamic Implementation for integer data) 


#include <stdio.h>
#include <stdlib.h>

// stack using linked list menu driven

struct node{
    int data;
    struct node*next;
}*new,*tos,*temp;

void push(int val){
    new = (struct node*)malloc(sizeof(struct node*));
    printf("Address of %d is : %p\n",val,new);
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
    printf("Deleted Element is : %d\n",tos->data);
    printf("Freeing the memory of %d Address : %p\n",tos->data,temp);
    tos = tos->next;
    temp->next = NULL;
    free(temp);
}

void display()
{
    while (tos != NULL) {
        printf(" %d --> ", tos->data);
        tos = tos->next;
    }
    printf("NULL\n\n");
}

int main()
{
    
    int key,e;
    while(1){
        printf("Menu driven program for Stack Using Linked List\n");
        printf("1.Insert\n2.Delete\n3.Display\n4.Exit\n");
        printf("Enter your choice : ");
        scanf("%d",&key);
        switch(key){
            case 1:
                printf("Enter an interger element to push : ");
                scanf("%d",&e);
                printf("\n");
                push(e);
                break;
            case 2:
                pop();
                printf("Popped an element from stack\n");
                break;
            case 3:
                printf("<-- Element in stack -->\n");
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