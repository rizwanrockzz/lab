// Task-1

// Design and Implement a program to create double linked list. Use the following pseudocode. Justify your solution with all the possible test cases. 

#include <stdio.h>
#include <stdlib.h>
 
int flag,e;
 
struct node{
    struct node*prev;
    int data;
    struct node*next;
}*new,*head,*temp,*helper;
 
// double linked list
 
void dll(){

    do{
    printf("Enter an element : ");
    scanf("%d",&e);
    new = (struct node*)malloc(sizeof(struct node*));
    new->prev = NULL;
    new->data = e;
    new->next = NULL;
    if(head == NULL){
        head = new;
        temp = new;
    }
    else{
        new->prev = head;
        head->next = new;
        head = head->next;
    }
    printf("Do you want to enter an other node (1/0) : ");
    scanf("%d",&flag);
    }while(flag==1);
}

void display(){
    helper = temp;
    printf("NULL ");
    while(helper!=NULL){
        printf("%d ",helper->data);
        helper = helper->next;
    }
    printf("NULL");
}
 
int main()
{
    dll();
    display();
 
    return 0;
}
// OUTPUT

// Enter an element : 10
// Do you want to enter an other node (1/0) : 1
// Enter an element : 20
// Do you want to enter an other node (1/0) : 1
// Enter an element : 30
// Do you want to enter an other node (1/0) : 1
// Enter an element : 40
// Do you want to enter an other node (1/0) : 1
// Enter an element : 50
// Do you want to enter an other node (1/0) : 0
// NULL 10 20 30 40 50 NULL