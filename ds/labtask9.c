// Task-1

// In a class room we have discussed the algorithms to create the polynomial and addition of two polynomials . 
// Based on the same discussion implement a solution.
// Input:
//      1st number = 5x2 + 4x1 + 2x0
//      2nd number = -5x1 - 5x0
// Output:
//         5x2-1x1-3x0
// Input:
//      1st number = 5x3 + 4x2 + 2x0
//      2nd number = 5x^1 - 5x^0
// Output:
//         5x3 + 4x2 + 5x1 - 3x0



#include <stdio.h>
#include <stdlib.h>
// Polynomials addition using Linked List

struct node{
    int coef,expo;
    struct node*next;
}*new1,*p1,*head1,*new2,*p2,*head2,*help1,*help2;

int ch1,ch2;

// code for 1st polynomial

void example(){
    printf("Enter coefficient and exponent\n");
    printf("Eg : 5x2 input => 5 2\n");
    printf("\n\n");
}

void poly1(){
    printf("Enter your first polynomial\n");
    do{
    new1 = (struct node*)malloc(sizeof(struct node*));
    printf("Enter p : ");
    scanf("%d %d",&new1->coef,&new1->expo);
    new1->next = NULL;
    if(head1 == NULL){
        head1 = new1;
        p1 = new1;
    }
    else{
        p1->next = new1;
        p1 = new1;
    }
    printf("Entered coef and expo : %d %d \n\n",new1->coef,new1->expo);
    printf("Do you want to enter an other node (1/0) : ");
    scanf("%d",&ch1);
    }while(ch1==1);
}

void poly2(){
    printf("\n\n");
    printf("Enter your second polynomial\n");
    do{
    new2 = (struct node*)malloc(sizeof(struct node*));
    printf("Enter coefficient and exponent\n");
    printf("Eg : 5x2 input => 5 2\n");
    printf("Enter p : ");
    scanf("%d %d",&new2->coef,&new2->expo);
    new2->next = NULL;
    if(head2 == NULL){
        head2 = new2;
        p2 = new2;
    }
    else{
        p2->next = new2;
        p2 = new2;
    }
    printf("Entered coef and expo : %d %d \n\n",new2->coef,new2->expo);
    printf("Do you want to enter an other node (1/0) : ");
    scanf("%d",&ch2);
    }while(ch2==1);
}


void display(){
    printf("\n\n");
    printf("<-- Entered values -->\n");
    printf("Ploynomial 1\n");
    while(head1!=NULL){
        printf("C : %d and expo : %d\n",head1->coef,head1->expo);
        head1 = head1->next;
    }
    printf("Ploynomial 2\n");
    while(head2!=NULL){
        printf("C : %d and expo : %d\n",head2->coef,head2->expo);
        head2 = head2->next;
    }
}

void add(){
    printf("\n\n");
    p1 = head1;
    p2 = head2;
    while(p1!=NULL && p2!=NULL){
        // printf("P1->expo : %d and P2->expo : %d\n",p1->expo,p2->expo);
        if(p1->expo == p2->expo){
            // printf("p1 expo became same\n");
            printf(" %dx^%d ",p1->coef+p2->coef,p1->expo);
            p1 = p1->next;
            p2 = p2->next;
        }
        else if(p1->expo > p2->expo){
            // printf("p1 expo greater than p2\n");
            printf(" %dx^%d ",p1->coef,p1->expo);
            p1=p1->next;
        }
        else{
            // printf("Atlast both p2 expos adding\n");
            printf(" %dx^%d ",p2->coef,p2->expo);
            p2=p2->next;
        }
        if(p1!=NULL || p2!=NULL){
            printf("+");
        }
    }
}

int main()
{
    int a,b;
    example();
    poly1();
    poly2();
    // display();
    add();
    return 0;
}


//OUTPUT 

// Enter coefficient and exponent
// Eg : 5x2 input => 5 2


// Enter your first polynomial
// Enter p : 5 2
// Entered coef and expo : 5 2 

// Do you want to enter an other node (1/0) : 1
// Enter p : 4 1
// Entered coef and expo : 4 1 

// Do you want to enter an other node (1/0) : 1
// Enter p : 2 0
// Entered coef and expo : 2 0 

// Do you want to enter an other node (1/0) : 0


// Enter your second polynomial
// Enter coefficient and exponent
// Eg : 5x2 input => 5 2
// Enter p : -5 1
// Entered coef and expo : -5 1 

// Do you want to enter an other node (1/0) : 1
// Enter coefficient and exponent
// Eg : 5x2 input => 5 2
// Enter p : -5 0
// Entered coef and expo : -5 0 

// Do you want to enter an other node (1/0) : 0


//  5x^2 + -1x^1 + -3x^0 











// Task 4

#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

void linkedListTraversal(struct node *new)
{
    while (new != NULL)
    {
        printf("Element: %d\n", new->data);
        new = new->next;
    }
}

// Case 1
struct node *insertAtFirst(struct node *head, int data)
{
    struct node *new = (struct node *)malloc(sizeof(struct node));
    new->data = data;

    new->next = head;
    return new;
}

// Case 2
struct node *insertAtIndex(struct node *head, int data, int index)
{
    struct node *new = (struct node *)malloc(sizeof(struct node));
    struct node *p = head;
    int i = 0;

    while (i != index - 1)
    {
        p = p->next;
        i++;
    }
    new->data = data;
    new->next = p->next;
    p->next = new;
    return head;
}

// Case 3
struct node *insertAtEnd(struct node *head, int data)
{
    struct node *new = (struct node *)malloc(sizeof(struct node));
    new->data = data;
    struct node *p = head;

    while (p->next != NULL)
    {
        p = p->next;
    }
    p->next = new;
    new->next = NULL;
    return head;
}

// Case 4
struct node *insertAfternode(struct node *head, struct node *prevnode, int data)
{
    struct node *new = (struct node *)malloc(sizeof(struct node));
    new->data = data;

    new->next = prevnode->next;
    prevnode->next = new;

    return head;
}

int main()
{
    struct node *head;
    struct node *second;
    struct node *third;
    struct node *fourth;

    // Allocate memory for nodes in the linked list in Heap
    head = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));
    fourth = (struct node *)malloc(sizeof(struct node));

    // Link first and second nodes
    head->data = 7;
    head->next = second;

    // Link second and third nodes
    second->data = 11;
    second->next = third;

    // Link third and fourth nodes
    third->data = 41;
    third->next = fourth;

    // Terminate the list at the third node
    fourth->data = 66;
    fourth->next = NULL;

    printf("Linked list before insertion\n");
    linkedListTraversal(head);
    head = insertAtFirst(head, 56);
    head = insertAtIndex(head, 34, 2);
    head = insertAtEnd(head, 99);
    head = insertAfternode(head, third, 45);
    printf("\nLinked list after insertion\n");
    linkedListTraversal(head);

    return 0;
}
