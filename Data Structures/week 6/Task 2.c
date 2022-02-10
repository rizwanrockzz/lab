// Task-2

// We have discussed Queue operations called insert() and delete() in the class. Also illustrated with
// examples. Design and implement menu driven C program with 4 operations. (1) Add element to Queue
// (2) Delete element from Queue (3) Traverse elements and (4) Exit. Write all possible examples
// supported by relevant test cases. 

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



