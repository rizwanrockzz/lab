// TASK - 1

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









// TASK 2


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

void insertHead(struct node*p,int val){
    struct node*new = (struct node*)malloc(sizeof(struct node));
    new->prev = NULL;
    new->data = val;
    new->next = p;
    p->prev = new;
    
    temp = new;
}
 
int main()
{
    dll();
    display();
    insertHead(temp,50);
    printf("\n");
    display();
 
    return 0;
}







// Task-3
/*
Based on the knowledge acquired from Task-1 and Task-2. Perform (i) Insert of node at the end of 
a double linked list and (ii) Insert of node at the specified position of a double linked list.
*/

#include<stdio.h>  
#include<stdlib.h> 
struct node 
{ 
    struct node *prev; 
    struct node *next; 
    int data; 
}*head; 

void insertion_last() 
{ 
   struct node *new,*temp; 
   int item; 
   new = (struct node *) malloc(sizeof(struct node)); 
   printf("Enter value : "); 
   scanf("%d",&item); 
   new->data=item; 
   if(head == NULL) 
   { 
       new->next = NULL; 
       new->prev = NULL; 
       head = new; 
   } 
   else 
   { 
      temp = head; 
      while(temp->next!=NULL) 
      { 
      	temp = temp->next; 
      } 
      temp->next = new; 
      new ->prev=temp; 
      new->next = NULL; 
      } 
        
} 
      
void insertion_specified() 
{ 
   struct node *new,*temp; 
   int item,loc,i; 
   new = (struct node *)malloc(sizeof(struct node)); 
 
   temp=head; 
   printf("Enter the location"); 
   scanf("%d",&loc); 
   for(i=0;i<loc;i++) 
   { 
       temp = temp->next; 
       if(temp == NULL) 
       { 
       	printf("\n There are less than %d elements", loc); 
       	return; 
       } 
   } 
   printf("Enter value"); 
   scanf("%d",&item); 
   new->data = item; 
   new->next = temp->next; 
   new-> prev = temp; 
   temp->next = new; 
   temp->next->prev=new; 
       
  
} 
 
void display() 
{ 
    struct node *p; 
    printf("\n printing values...\n"); 
    p = head; 
    while(p != NULL) 
    { 
        printf("%d\n",p->data); 
        p=p->next; 
    } 
}
 
void main () 
{ 
int choice =0; 
 printf("1.Insert at last\n2.Insert at any random location\n3.Show\n4.Exit\n");
    while(1) 
    { 
        printf("Enter your choice : "); 
        scanf("%d",&choice); 
        switch(choice) 
        { 
            case 1: 
                insertion_last(); 
                break; 
            case 2: 
                insertion_specified(); 
                break; 
            case 3: 
                display(); 
    	        break; 
            case 4: 
                exit(0); 
            default: 
                printf("Please enter valid choice..\n"); 
        } 
    } 
} 
 
   










