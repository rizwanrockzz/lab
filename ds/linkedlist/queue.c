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
    insert(10);
    insert(20);
    delete();
    insert(30);
    insert(40);
    delete();
    delete();
    insert(50);
    insert(60);
    display();



    return 0;
}
