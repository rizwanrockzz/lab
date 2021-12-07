// Menu driven program

#include<stdio.h>
#include<stdlib.h>

int tos = 0;
int arr[50] ;

void push(int x){
    if (tos>5){
        printf("Stack Overflow");
    }
    else{
        tos++;
        arr[tos] = x;
    }
}

int pop(){
    if(tos<=0){
        printf("Stack empty");
    }
    else{
        int y = arr[tos];
        tos--;
        return y;
    }
}

void display(){
    for(int i=1;i<=tos;i++){
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
                if(tos!=0){
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

    
    return 0;
}


// task2

#include <stdio.h>
#include<stdlib.h>
char arr[50] ;
int tos = 0;
void push(char x){
    if (tos>=5){
        printf("Stack Overflow");
    {
    else{
        tos++;
        arr[tos] = x;
    }
}

int pop(){
    if(tos<=0){
        printf("Stack empty");
    }
    else{
        int y = arr[tos];
        tos--;
        return y;
    }
}


int main()
{
   char str[20];
   gets(str);
   printf("%s", str);
//   printf("%ld",strlen(str));/
    for(int i=0;i<strlen(str);i++){
        push(str[i]);
    }
    
    for(int i=0;i<strlen(str);i++){
        printf("%s",arr[i]);
    }
   
   return 0;
}
