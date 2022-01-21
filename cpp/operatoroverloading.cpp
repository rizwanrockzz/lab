// PROGRAM 2

#include <iostream>
using namespace std;
// overload == operator

class Load{
public:
    int a;
    
    void get(){
        cout<<"Enter a value : ";
        cin>>a;
    }
    
    void operator ==(Load l){
        if(a==l.a){
            cout<<"Object 1 and Object 2 both are equal";
        }
        else{
            cout<<"Object 1 and Object 2 both are not equal";
        }
    }
    
};

int main()
{
    Load l1,l2;
    l1.get();
    l2.get();
    l1==l2;
        
    return 0;
}







// PROGRAM 3

#include <iostream>
using namespace std;
// overload + operator

class Load{
public:
    int a;
    
    void get(){
        cout<<"Enter a value : ";
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
    
    void operator >(Load l){
        if(a>l.a){
            cout<<"Object 1 is greater than Object 2";
        }
        else{
            cout<<"Object 2 is greater than Object 1";
        }
    }
    
    void operator <(Load l){

        if(a<l.a){
            cout<<"Object 1 is less than Object 2";
        }
        else{
            cout<<"Object 2 is less than Object 1";
        }
    }
    
    void operator ==(Load l){
        if(a==l.a){
            cout<<"Object 1 and Object 2 both are equal";
        }
        else{
            cout<<"Object 1 and Object 2 both are not equal";
        }
    }
    
};

int main()
{
    Load l1,l2;
    l1.get();
    l2.get();
    char c;
    cout<<"Enter the operator which you want to overload : ";
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
        case '>':
            l1>l2;
            break;
        case '<':
            l1<l2;
            break;
        case '=':
            l1==l2;
            break;
        default:
            cout<<"Enter a valid operator"<<endl;
            break;
    }
        
    return 0;
}
