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






