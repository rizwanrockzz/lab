#include <iostream>
using namespace std;
// overload + operator

class Load{
public:
    int a;
    
    void get(){
        cin>>a;
    }
    
    void operator +(Load l){
        cout<<"sum is : "<<a+l.a<<endl;
    }
};

int main()
{
    Load l1,l2;
    l1.get();
    l2.get();
    // cout<<l1+l2<<endl;
    l1+l2;
    

    return 0;
}
