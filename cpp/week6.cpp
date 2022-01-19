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
