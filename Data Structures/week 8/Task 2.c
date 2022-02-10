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