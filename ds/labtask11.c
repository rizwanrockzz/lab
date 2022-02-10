// Task-1

// In a class room we have discussed the algorithms for different traversal techniques like 
// (i) Inorder 
// (ii) preorder and 
// (iii) postorder
// Based on the same discussion implement a solution. 
// Use the following LOC and complete the implimenation part. 
// Also run all the possible testcases. 


#include <stdio.h>
#include <stdlib.h>

struct node{
    int data; // like root
    struct node *left;
    struct node *right;
};


struct node *create()
{
    struct node *temp;
    temp=(struct node *)malloc(sizeof(struct node));
    temp->left=NULL;
    temp->right=NULL;
    printf("Enter a node value : ");
    scanf("%d",&temp->data);
    return temp;
}


void inorder(struct node *T)
{
    if(T!=NULL)
    {
        inorder(T->left);
        printf("%d ",T->data);
        inorder(T->right);
    }
}


void preorder(struct node *T)
{
    if(T!=NULL)
    {
        printf("%d ",T->data);
        preorder(T->left);
        preorder(T->right);
    }	
}

void postorder(struct node *T)
{
    if(T!=NULL)
    {
        postorder(T->left);
        postorder(T->right);
        printf("%d ",T->data);
    }
}

void main(){
    struct node *v1,*v2,*v3,*v4,*v5,*v6,*v7;
    v1=create();
    v2=create();
    v3=create();
    v4=create();
    v5=create();
    v6=create();
    v7=create();

    v1->left = v2;
    v1->right= v3;
    v2->left = v4;
    v2->right= v5;
    v3->left = v6;
    v3->right= v7;
    
    printf("\nInorder : ");
    inorder(v1);
    printf("\n\n");
    printf("\nPreorder : ");
    preorder(v1);
    printf("\n\n");
    printf("\nPostorder : ");
    postorder(v1);

}








// Task-2

// In a class room we have discussed the algorithms for infix to postfix conversion. Based on the same discussion implement a solution. Also run all the possible testcases. 
// Testcase-1
// Infix Expression : 3+4*5/6
// Postfix Expression : 3 4 5 * 6 / +
// Testcase-2
// Infix Expression : A+(B*C-(D/E^F)*G)*H
// Postfix Expression : ABC*DEF^/G*-H*+


#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#define MAX 50

void push(long int symbol);
long int pop();
void infix_to_postfix();
int priority(char symbol);
int isEmpty();
int white_space(char);

char infix[MAX], postfix[MAX];
long int stack[MAX];
int top;

int main()
{
 clrscr();
    top=-1;
    printf("Enter infix : ");
    gets(infix);
    infix_to_postfix();
    printf("Postfix : %s\n",postfix);
    getch();
    return 1;
}

void infix_to_postfix()
{
    unsigned int i,p=0;
    char next;
    char symbol;
    for(i=0;i<strlen(infix);i++)
    {
	symbol=infix[i];
	if(!white_space(symbol))
	{
	    switch(symbol)
	    {
	    case '(':
		push(symbol);
		break;
	    case ')':
		while((next=pop())!='(')
		    postfix[p++] = next;
		break;
	    case '+':
	    case '-':
	    case '*':
	    case '/':
	    case '%':
	    case '^':
		while( !isEmpty( ) &&  priority(stack[top])>= priority(symbol) )
		    postfix[p++]=pop();
		push(symbol);
		break;
	    default:
		 postfix[p++]=symbol;
	    }
	}
    }
    while(!isEmpty( ))
	postfix[p++]=pop();
    postfix[p]='\0';
}


int priority(char symbol)
{
    switch(symbol)
    {
    case '(':
	return 0;
    case '+':
    case '-':
	return 1;
    case '*':
    case '/':
    case '%':
	return 2;
    case '^':
	return 3;
    default :
	return 0;
    }
}

void push(long int symbol)
{
    if(top>MAX)
    {
	printf("Stack overflow\n");
	exit(1);
    }
    stack[++top]=symbol;
}

long int pop()
{
    if( isEmpty() )
    {
	printf("Stack underflow\n");
	exit(1);
    }
    return (stack[top--]);
}
int isEmpty()
{
    if(top==-1)
	return 1;
    else
	return 0;
}

int white_space(char symbol)
{
    if( symbol == ' ' || symbol == '\t' )
	return 1;
    else
	return 0;
}
