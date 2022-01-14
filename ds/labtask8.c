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






// Task-2

// We have discussed queue operations called insert () and delete () in the class. 
// Also illustrated with examples. Design and implement menu driven C program with 4 operations. 
// (1) Add element to Queue 
// (2) Delete element from Queue 
// (3) Traverse elements and 
// (4) Exit. 
// Write all possible examples supported by relevant test cases.  
// (Use Dynamic Implementation for character data) 
 


#include <stdio.h>
#include<string.h>
#include <stdlib.h>

// queue using linked list char

struct node{
    int data;
    struct node*next;
}*new,*front,*rear,*temp,*helper;

void insert(char val){
    new = (struct node*)malloc(sizeof(struct node*));
    printf("Address for %c is : %p\n\n",val,new);
    new->data = val;
    new->next = NULL;
    if(rear == NULL && front == NULL){
        printf("It is null\n\n");
        front = new;
        rear = new;
    }
    else{
        printf("It is not null\n\n");
        rear->next = new;
        rear = new;
    }
}

void delete(){
    
    if(rear == NULL && front == NULL){
        printf("Queue Empty\n\n");
    }
    else{
        temp = front;
        printf("Deleted Element is : %c\n",front->data);
        printf("Freeing the memory of %c Address : %p\n\n",front->data,temp);
        printf("Next is : %p \n\n",front->next);
        front = front->next;
        temp->next = NULL;
        free(temp);
    }
    
}

void display()
{
    helper = front;
    while (helper != NULL) {
        // printf("tos --> data :: %d\n\n", front->data);
        printf("%c --> ", helper->data);
        helper = helper->next;
    }
    printf("NULL\n\n");
}

int main()
{

    int key,len;
    char e[50];
    
    while(1){
        printf("Menu driven program for Queue Using Linked List\n");
        printf("1.Insert\n2.Delete\n3.Display\n4.Exit\n");
        printf("Enter your choice : ");
        scanf("%d",&key);
        switch(key){
            case 1:
                printf("Enter an element to push : ");
                scanf("%s",e);
                printf("e is : %c\n",e[0]);
                len = strlen(e);
                for(int i=0;i<len;i++)
                {
                    insert(e[i]);
                }
                printf("\n");
                break;
            case 2:
                delete();
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
                break;
        }

    }

    return 0;
}







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








// Task-4

// We have discussed queue operations called insert () and delete () in the class. 
// Also illustrated with examples. Design and implement menu driven C program with 4 operations. 
// (1) Add element to Queue 
// (2) Delete element from Queue 
// (3) Traverse elements and 
// (4) Exit. 
// Write all possible examples supported by relevant test cases.  
// (Use Dynamic Implementation for integer data) 


#include <stdio.h>
#include <stdlib.h>

// queue using linked list

struct node{
    int data;
    struct node*next;
}*new,*front,*rear,*temp;

void insert(int val){
    new = (struct node*)malloc(sizeof(struct node*));
    printf("Address for %d is : %p\n\n",val,new);
    new->data = val;
    new->next = NULL;
    if(rear == NULL && front == NULL){
        printf("It is null\n\n");
        front = new;
        rear = new;
    }
    else{
        printf("It is not null\n\n");
        rear->next = new;
        rear = new;
    }
}

void delete(){
    
    if(rear == NULL && front == NULL){
        printf("Queue Empty\n\n");
    }
    else{
        temp = front;
        printf("Deleted Element is : %d\n",front->data);
        printf("Freeing the memory of %d Address : %p\n\n",front->data,temp);
        printf("Next is : %p \n\n",front->next);
        front = front->next;
        temp->next = NULL;
        free(temp);
    }
    
}

void display()
{
    while (front != NULL) {
        // printf("tos --> data :: %d\n\n", front->data);
        printf("%d --> ", front->data);
        front = front->next;
    }
    printf("NULL\n\n");
}

int main()
{
    // insert(10);
    // insert(20);
    // delete();
    // insert(30);
    // insert(40);
    // delete();
    // delete();
    // insert(50);
    // insert(60);
    // display();
    int key,e;
    
    while(1){
        printf("Menu driven program for Queue Using Linked List\n");
        printf("1.Insert\n2.Delete\n3.Display\n4.Exit\n");
        printf("Enter your choice : ");
        scanf("%d",&key);
        switch(key){
            case 1:
                printf("Enter an integer element to push : ");
                scanf("%d",&e);
                printf("\n");
                insert(e);
                break;
            case 2:
                delete();
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
                break;
        }

    }

    return 0;
}






