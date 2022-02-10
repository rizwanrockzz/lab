// Task 1
// Menu driven program

// We have discussed stack operations called push () and pop () in the class. Also illustrated with examples. 
// Design and implement menu driven C program with 4 operations. 
// (1) Add element to stack (2) Delete element from stack (3) Traverse elements and (4) Exit.
// Write all possible examples supported by relevant test cases.   

#include<stdio.h>
#include<stdlib.h>

int tos = -1;
int arr[50],max=4;

void push(int x){
    if (tos>=max){
        printf("Stack Overflow\n\n");
        return;
    }
    else{
        tos++;
        arr[tos] = x;
    }
}

int pop(){
    if(tos==-1){
        printf("Stack empty\n\n");
    }
    else{
        int y = arr[tos];
        tos--;
        return y;
    }
}

void display(){
    for(int i=0;i<=tos;i++){
        printf("%d\n",arr[i]);
    }
}

int main(){
    int key,x;
    while(1){
        printf("Enter 1,2,3 or 4\n");
        printf("1 push\n");
        printf("2 pop\n");
        printf("3 display\n");
        printf("4 stop\n");
        scanf("%d",&key);

        switch(key){
            case 1:
                if (tos<=5){
                    printf("Enter an element to push : ");
                    scanf("%d",&x);
                    push(x);
                }
                else{
                    printf("Stack Overflow\n");
                }
                break;
            case 2:
                if(tos!=-1){
                    printf("Poped element is : %d\n",pop());
                }
                else{
                    printf("Stack is empty\n");
                }
                break;
            
            case 3:
                display();
                break;
            case 4:
                exit(0);
                break;
            
        }
    }
}
    


// above program better version
    
/* C Program for stack operations using switch case*/

#include<stdio.h>
#include<stdlib.h>
#define MAX 4

int stack_arr[MAX];
int top = -1;

void push(int item);
int pop();
int peek();
int isEmpty();
int isFull();
void display();

int main()
{
        int choice,item;
        while(1)
        {
                printf("\n1.Push\n");
                printf("2.Pop\n");
                printf("3.Display the top element\n");
                printf("4.Display all stack elements\n");
                printf("5.Quit\n");
                printf("\nEnter your choice : ");
                scanf("%d",&choice);
                switch(choice)
                {
                 case 1 :
                        printf("\nEnter the item to be pushed : ");
                        scanf("%d",&item);
                        push(item);
                        break;
                 case 2:
                        item = pop();
                        printf("\nPopped item is : %d\n",item );
                        break;
                 case 3:
                        printf("\nItem at the top is : %d\n", peek() );
                        break;
                 case 4:
                        display();
                        break;
                 case 5:
                        exit(1);
                 default:
                        printf("\nWrong choice\n");
                }/*End of switch*/
        }/*End of while*/

        return 0;

}/*End of main()*/

void push(int item)
{
        if( isFull() )
        {
                printf("\nStack Overflow\n");
                return;
        }
        top = top+1;
        stack_arr[top] = item;
}/*End of push()*/

int pop()
{
        int item;
        if( isEmpty() )
        {
                printf("\nStack Underflow\n");
                exit(1);
        }
        item = stack_arr[top];
        top = top-1;
        return item;
}/*End of pop()*/

int peek()
{
        if( isEmpty() )
        {
                printf("\nStack Underflow\n");
                exit(1);
        }
        return stack_arr[top];
}/*End of peek()*/

int isEmpty()
{
        if( top == -1 )
                return 1;
        else
                return 0;
}/*End of isEmpty*/

int isFull()
{
        if( top == MAX-1 )
                return 1;
        else
                return 0;
}/*End of isFull*/

void display()
{
        int i;
        if( isEmpty() )
        {
                printf("\nStack is empty\n");
                return;
        }
    printf("\nStack elements :\n\n");
        for(i=top;i>=0;i--)
                printf(" %d\n", stack_arr[i] );
        printf("\n");
}/*End of display()*/