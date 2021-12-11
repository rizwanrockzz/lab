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




#include <iostream>
using namespace std;
// Q3

class Person
{
public:
    string firstname,lastname;
    Person(string a,string b){
        firstname = a;
        lastname = b;
    }
};

class Employee:public Person
{
public:
    int eno,esal;
    string edept;
    Employee (int a,string b,int c,string d,string e):Person(d,e){

        eno = a;
        edept = b;
        esal = c;
    }
    void display();

};

void Employee::display(){
    cout<<"Person's First Name is : "<<firstname<<endl;
    cout<<"Person's Last Name is : "<<lastname<<endl;
    cout<<"Employee number is : "<<eno<<endl;
    cout<<"Employee department is : "<<edept<<endl;
    cout<<"Employee salary is : "<<esal<<endl;
}

int main()
{

    Employee e(1,"marketing",100000,"rizwan","md");
    e.display();
    
    return 0;
}





#include <iostream>
using namespace std;
// Q4

class Person
{
public:
    string firstname,lastname;
    Person (string a,string b){
        firstname = a;
        lastname = b;
    }
};

class Employee:public Person
{
public:
    int eno,esal;
    string edept;
    Employee (int a1,string b1,int c1,string d1,string e1):Person(d1,e1){
        eno = a1;
        edept = b1;
        esal = c1;
    }
};

class Department:public Employee{

public:
    int dno,experience;
    string dname;
    Department(int a,string b,int c,int d,string e,int f,string g,string h):Employee(d,e,f,g,h){
        dno = a;
        dname = b;
        experience = c;
    }
    void display();
};

void Department::display(){
    cout<<"Person's First Name is : "<<firstname<<endl;
    cout<<"Person's Last Name is : "<<lastname<<endl;
    cout<<"Employee number is : "<<eno<<endl;
    cout<<"Employee department is : "<<edept<<endl;
    cout<<"Employee salary is : "<<esal<<endl;
    cout<<"Department number is : "<<dno<<endl;
    cout<<"Department name is : "<<dname<<endl;
    cout<<"Department experience is : "<<experience<<endl;
}

int main()
{
    Department d(5,"sales",11,1,"marketing",100000,"rizwan","md");
    d.display();

    return 0;
}



//Q8
#include <iostream>
using namespace std;
// Q8

class Person
{
public:
    string firstname,lastname;
    Person(string a,string b){
        cout<<"Person got invoked"<<endl;
        firstname = a;
        lastname = b;
    }
    void displayPer();
};

class Employee:public Person
{
public:
    int eno,esal;
    string edept;
    Employee (int a1,string b1,int c1){
        cout<<"Employee got invoked"<<endl;
        eno = a1;
        edept = b1;
        esal = c1;
    }
    void displayEmp();

};

void Person::displayPer(){
    cout<<"Person's First Name is : "<<firstname<<endl;
    cout<<"Person's Last Name is : "<<lastname<<endl;
}

void Employee::displayEmp(){
    cout<<"Employee number is : "<<eno<<endl;
    cout<<"Employee department is : "<<edept<<endl;
    cout<<"Employee salary is : "<<esal<<endl;
}

int main()
{
    Person p("rizwan","md");
    Employee e(1,"marketing",100000);
    p.displayPer();
    e.displayEmp();
    // e.display();
    // cout<<p.firstname;
    
    return 0;
}
