#include <iostream>
using namespace std;
// simple inheritance

class A{

public:
    int x,y;
    void setA(int a,int b);
    
};

class B:public A{

public:
    int z;
    void setB(int c);
    void display();
};

void A::setA(int a,int b){
    x = a;
    y = b;
}

void B::setB(int c){
    z = c;
}

void B::display(){
    cout<<"The value of public x is : "<<x<<" and y is : "<<y<<endl;
    cout<<"The value of public z is : "<<z;
}

int main()
{
    B b;
    b.setA(4,5);
    b.setB(7);
    b.display();
    

    return 0;
}





#include <iostream>
using namespace std;
//Q2

class Q{

public:
    int q;
    Q(){
        q = 4;
    }
    void displayQ();
};

class R:public Q{

public:
    int r;
    R(){
        r = 11;
    }
    void displayR();
};

class S:public R{
 
public:
    int s;
    S(){
        s = 100;
    }
    void displayS();
};

void Q::displayQ(){
    cout<<"The value of q is : "<<q<<endl;
}

void R::displayR(){
    cout<<"The value of q is : "<<q<<endl;
    cout<<"The value of r is : "<<r<<endl;
}

void S::displayS(){
    cout<<"The value of q is : "<<q<<endl;
    cout<<"The value of r is : "<<r<<endl;
    cout<<"The value of s is : "<<s<<endl;
}

int main()
{
    Q obj1;
    R obj2;
    S obj3;
    
    obj1.displayQ();
    obj2.displayR();
    obj3.displayS();
    
    return 0;
}




