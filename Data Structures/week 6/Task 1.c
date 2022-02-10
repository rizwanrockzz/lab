// Task 1

// In a class room we have discussed the stack operations called push() and pop(). Based on these
// operations design and implement C/Python code to evaluate postfix expression. Hint: Use the following
// statement in the push function stack[top]=(int)(post[tmp]-48); for ASCII value conversion from string to
// numbers. For examples please refer http://www.btechsmartclass.com/data_structures/postfixevaluation.html
// Sample Input-1:
// Postfix Expression 5 3 + 8 2 - *
// Sample Output-1:
// Postfix Expression Evaluation Value is 48
// Sample Input-2:
// Postfix Expression 2 3 4 + * 6 -
// Sample Output-2:
// Postfix Expression Evaluation Value is 8

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
