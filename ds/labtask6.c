// Task 1

#include <stdio.h>
#include <stdlib.h>
//Queue Operations

int front = 0;
int rear = -1;
int max = 3;
int a[50];

void insert(int x){
    if (rear >= max){
        printf("Queue Overflow\n\n");
    }
    else{
        rear++;
        a[rear] = x;
    }
}

void delete(){
    if(front == rear || rear == 0){
        printf("Queue is empty\n");
    }
    else{
        int y = a[front];
        front++;
        printf("The deleted element is : %d\n\n",y);
    }

}

void display(){
    if(front == rear || rear == 0){
        printf("Queue is empty\n");
    }
    else{
        for(int i=front;i<=rear;i++){
            printf("%d ",a[i]);
        }
    }
}

int main()
{
    int key,e,z;
    while(1){
        printf("1.Insert\n2.Delete\n3.Display\n4.exit\n");
        printf("Enter your choice : ");
        scanf("%d",&key);
        switch(key){
            case 1:
                printf("Enter your element to insert : ");
                scanf("%d",&e);
                insert(e);
                break;
            case 2: 
                delete();
                break;
            case 3:
                printf("Elements in the  queue are \n");
                display();
                printf("\n\n");
                break;
            case 4:
                exit(0);
                break;
            default :
                printf("Enter a valid choice\n");
                break;
                
        }
    }
    

    return 0;
}



// Task 2

#include <stdio.h>
#include<string.h>

// Postfix Evaluation

int tos = -1;
int arr[50] ;

void push(int x){

    tos++;
    arr[tos] = x;

}

int pop(){

    int y = arr[tos];
    tos--;
    return y;

}


int main()
{
    char word[50];
    int val1,val2,ans,x,y;
    
    scanf("%s", word);
    int length = strlen(word);
    
    for(int i=0;i<length;i++){
        
        if(word[i]>='0' || word[i] <='9' && word[i]-'0'>0 ){
            printf("%c ",word[i]);
            printf("%d  \n",word[i]-'0');
            push(word[i]-'0');
        }
        
        else{
            for(int i=1;i<length;i++){
                printf("%d ",arr[i]);
            }
            
            val2 = pop();
            val1 = pop();
            printf("\n\nval1 val2 %d  %d\n\n",val1,val2);
            x = val1;
            y = val2;
            switch(word[i]){
                
                case '+':
                    printf("+ %d\n\n",x+y);
                    push(x+y);
                    break;
                    
                case '-':
                    printf("- %d\n\n",x-y);
                    push(x-y);
                    break;
                    
                case '*':
                    printf("* %d\n\n",x*y);
                    push(x*y);
                    break;
                
                case '/':
                    printf("/ %d\n\n",x/y);
                    push(x/y);
                    break;
            }
        }
        
        
    }
    printf("\n\n\n");
    printf("Elements : ");
    for(int i=1;i<length;i++){
        printf("%d ",arr[i]);
    }
    printf("\n\n");
    printf("ans is : %d\n",arr[0]);

// 53+82-*
    return 0;
}
