#include <stdio.h>
#include <stdlib.h>
// #include <alloc.h> // deprecated

// stack using linked list

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
        // printf("tos --> data :: %d\n\n", tos->data);
        printf(" %d --> ", tos->data);
        tos = tos->next;
    }
    printf("NULL\n\n");
}

int main()
{
    push(10);
    push(20);
    push(30);
    display();
    push(40);
    pop();
    display();

    return 0;
}
