// STACK MENU DRIVEN

#include <iostream>
#include <stack>
#include<stdlib.h>
using namespace std;

int main()
{
    int b,x,key;
    stack<int> stack;
    
    while(1){
        cout<<"1.Push\n2.Pop\n3.Display\n4.Exit\n";
        cout<<"Enter your choice : ";
        cin>>key;
        switch(key){
            case 1:
                cout<<"Enter an element to push : ";
                cin>>x;
                stack.push(x);
                break;
            case 2:
                stack.pop();
                break;
            case 3:
                for (std::stack<int> dump = stack; !dump.empty(); dump.pop()){
                    cout << dump.top() << "  ";
                }
                cout<<endl;
                break;
            case 4:
                exit(0);
                break;
            default:
                cout<<"Enter a valid choice ";
        }
        
        
    }

    return 0;
}








// CHECK PALINDROME

#include <iostream>
#include <stack>
#include<stdlib.h>
using namespace std;

int main()
{
    int key,len,check=1;
    string word;
    char palindrom[30],a;
    stack<int> st;
    
    while(1){
        cout<<"1.Enter String\n2.Exit\n";
        cout<<"Enter your choice : ";
        cin>>key;
        switch(key){
            case 1:
                cout<<"Enter a string : ";
                cin>>word;
                len = word.length();
                for(int i=0;i<len;i++){
                    st.push(word[i]);
                }

                for(int i=0;i<len;i++){
                    a = st.top();
                    cout<<"a : "<<a<<"\n";
                    st.pop();
                    if(a!=word[i]){
                       check = 0;
                        break;
                    }
                }
                
                if (check==1){
                    cout<<word<<" is a palindrome\n";
                }
                else{
                    cout<<word<<" is not a palindrome\n";
                }
                break;
            case 2:
                exit(0);
                break;
            default:
                cout<<"Enter a valid choice\n";
        }
        
        
    }

    return 0;
}







// problem 3

#include<iostream>
#include<stack>
using namespace std;

int main()
{
    stack<int> s;
    int x,c,maxi = -1;
    cout<<"Menu\n1.push\n2.pop\n3.Maximum\n4.exit"<<endl;
    while(1)
    {
        cout<<"Enter the choice : ";
        cin>>c;
       switch(c)
       {
        case 1:
            cin>>x;
            s.push(x);
            cout<<endl;
            break;
        case 2:
            s.pop();
            break;
        case 3:
            for (std::stack<int> dump = s; !dump.empty(); dump.pop()){
                maxi = max(maxi,dump.top());
            }
            cout<<maxi<<endl;
            break;
        case 4:
            exit(0);
            
        default:
            cout<<"invalid choice";
       }
    }
return 0;
}








#include<iostream>
using namespace std;
class A
{
    public:
    int a;
};

class B:virtual public A{
    public:
    int b;
};

class C:virtual public A{
    public:
    int c;
};

class D: public B,public C{
    public:
    int d;
};

int main()
{
    D obj;
    obj.a=25;             //statement 1
    obj.a=100;           //statement 2

    obj.b=50;
    obj.c=75;
    obj.d=150;
    
    cout<< "\n A : "<< obj.a;
    cout<< "\n B : "<< obj.b;
    cout<< "\n C : "<< obj.c;
    cout<< "\n D : "<< obj.d;
}



// pure virtual function

#include<iostream>
using namespace std;

class Base
{
int x;
public:
	virtual void fun() = 0;
	int getX() { return x; }
};

// This class inherits from Base and implements fun()
class Derived: public Base
{
	int y;
public:
	void fun() { cout << "fun() called"; }
};

int main(void)
{
	Derived d;
	d.fun();
	return 0;
}
