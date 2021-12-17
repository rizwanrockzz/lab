#include <iostream>
using namespace std;
// overload + operator

class Load{
public:
    int a;
    
    void get(){
        cout<<"Enter : ";
        cin>>a;
    }
    
    void operator +(Load l){
        cout<<"Sum is : "<<a+l.a<<endl;
    }
    
    void operator -(Load l){
        cout<<"Subtraction is : "<<a-l.a<<endl;
    }
    
    void operator *(Load l){
        cout<<"Product is : "<<a*l.a<<endl;
    }
    
    void operator /(Load l){
        cout<<"Division is : "<<a/l.a<<endl;
    }
    
    void operator %(Load l){
        cout<<"Remainder is : "<<a%l.a<<endl;
    }
    
};

int main()
{
    Load l1,l2;
    l1.get();
    l2.get();
    char c;
    // cout<<"1"
    cout<<"Enter operator : ";
    cin>>c;
    switch (c){
        case '+':
            l1+l2;
            break;
        case '-':
            l1-l2;
            break;
        case '*':
            l1*l2;
            break;
        case '/':
            l1/l2;
            break;
        case '%':
            l1%l2;
            break;
        default:
            cout<<"Enter a valid operator"<<endl;
            break;
    }
        

    

    return 0;
}
