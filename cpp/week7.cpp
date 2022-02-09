// Task - 1 
// 1. Write a c++ program to demonstrate how constructors are invoked in Multilevel inheritance

#include <iostream>
using namespace std;

class A 
{
    public:
    A()
    {
        cout<<"This is class A constructor."<<endl;
    }
    ~A()
    {
        cout<<"This is class A destructor."<<endl;
    }
};

class B:public A 
{
    public:
    B()
    {
        cout<<"This is class B constructor."<<endl;
    }
    ~B()
    {
        cout<<"This is class B destructor."<<endl;
    }
};

class C:public B 
{
    public:
    C()
    {
        cout<<"This is class C constructor."<<endl;
    }
    ~C()
    {
        cout<<"This is class C destructor."<<endl;
    }
};

int main()
{
    C obj;
}

// Task 1 Output

// This is class A constructor.
// This is class B constructor.
// This is class C constructor.
// This is class C destructor.
// This is class B destructor.
// This is class A destructor.








// Task - 2
// 2. Write a c++ program to demonstrate how constructors are invoked in Multilevel inheritance

#include <iostream>
using namespace std;

class A 
{
    public:
    A()
    {
        cout<<"This is class A constructor."<<endl;
    }
};

class B
{
    public:
    B()
    {
        cout<<"This is class B constructor."<<endl;
    }
};

class C:public B,public A
{
    public:
    C()
    {
        cout<<"This is class C constructor."<<endl;
    }
};
int main()
{
    C obj;
}


// Task 2 OUTPUT 

// This is class B constructor.
// This is class A constructor.
// This is class C constructor.









// Task - 3 
// 3.Write a c++ program to demonstrate how constructors are invoked in  Hierarchical  inheritance.

#include<iostream>
using namespace std;
class A 
{
    public:
    A()
    {
        cout<<"This is class A constructor."<<endl;
    }
};
class B:public A 
{
    public:
    B()
    {
        cout<<"This is class B constructor."<<endl<<endl;
    }
};
class C:public A
{
    public:
    C()
    {
        cout<<"This is class C constructor."<<endl<<endl;
    }
};
int main()
{
    B obj1;
    C obj2;
}

// Task 3 Output

// This is class A constructor.
// This is class B constructor.

// This is class A constructor.
// This is class C constructor.

