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
// 2. Write a c++ program to demonstrate how constructors are invoked in Multiple inheritance

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








// Task 4
// 4.	Create a class named person with the variables name, address, age, gender and a method display()
// to show the employee details. Derive a new class employee from that deptid and designation and display
// the complete details

#include<iostream>
using namespace std;

class Person
{
    string name,gender,address;
    int age;
    public:
    void get()
    {
        cout<<"Enter the name of the person : ";
        cin>>name;
        cout<<"Enter the gender of the person : ";
        cin>>gender;
        cout<<"Enter the address of the person : ";
        cin>>address;
        cout<<"Enter the age of the person : ";
        cin>>age;
    }
    void display()
    {
        cout<<endl;
        cout<<"The name of the person : "<<name<<endl;
        cout<<"The gender of the person : "<<gender<<endl;
        cout<<"The address of the person : "<<address<<endl;
        cout<<"The age  of the person : "<<age<<endl;
    }
};

class Employee:public Person
{
    
    int deptid;
    string designation;
    public:
    void getdata()
    {
        cout<<"Enter the id and designation : ";
        cin>>deptid>>designation;
    }
    void putdata()
    {
        cout<<endl;
        cout<<"The deptid of the person : "<<deptid<<endl;
        cout<<"The designation of the person : "<<designation<<endl;
    }
    
};

int main()
{
    Employee e;
    e.get();
    e.getdata();
    e.display();
    e.putdata();
    
}

// Task 4 Output

// Enter the name of the person : rizwan
// Enter the gender of the person : male
// Enter the address of the person : vijayawada
// Enter the age of the person : 18
// Enter the id and designation : 1 ceo

// The name of the person : rizwan
// The gender of the person : male
// The address of the person : vijayawada
// The age  of the person : 18

// The deptid of the person : 1
// The designation of the person : ceo







// Task 5
// 5. Create a class person with the filed firstname, lastname. Use parameterized constructor 
// to set the values to the variables at runtime. Create sub classes Employee and Manager with the 
// variables:Employee:eno, edept,esal , Manager: designation, msal. Create necessary methods in both the 
// classes. Preferably parameterized for setting the data and default method for display the information. 
// Create a subclass of Employee called Department with the variables dno, dname, experience. 
// Set parameterized method for setting the data and display all the information.

#include<iostream>
using namespace std;

class Person
{   
public:
    string fname;
    string lname;
    void show(string a,string b)
    {
        fname=a;
        lname=b;
    }
};

class Employee:public Person
{
public:
    int eno;
    float esal;
    string edept;
    void show2(int a,float b,string c)
    {
        eno=a;
        esal=b;
        edept=c;
    }
    
};

class Department:public Employee
{
public:
    int dno,experience;
    string dname;
    
    void show3(int a,string b,int c)
    {
        dno=a;
        dname=b;
        experience=c;
    }
    void display()
    {
        cout<<endl;
        cout<<"First name of the employee : "<<fname<<endl;
        cout<<"Last name of the employee : "<<lname<<endl;
        cout<<"The no of the employee is : "<<eno<<endl;
        cout<<"The dept : "<<edept<<endl;
        cout<<"The salary of the employe : "<<esal<<endl;
        cout<<"The department number is : "<<dno<<endl;
        cout<<"The department name is : "<<dname<<endl;
        cout<<"Experience is : "<<experience<<endl;
    }
    
};
class Manager:public Person
{   
public:
    string designation;
    float msal;
    
    void getdata(string a,float b)
    {
        designation=a;
        msal=b;
    }
    void display2()
    {
        cout<<"Designation : "<<designation<<endl;
        cout<<"Manager Salary : "<<msal<<endl;
        
    }
};

int main()
{   
    Department d;
    string fname,lname,edept;
    int eno;
    float esal;
    cout<<"Enter your name (first name and last name) : ";
    cin>>fname>>lname;
    d.show(fname,lname);
    cout<<"Enter your eno , edept & esal : ";
    cin>>eno>>edept>>esal;
    d.show2(eno,esal,edept);
    d.show3(21,"information technology",5);
    Manager m;
    m.getdata("manager",100000);
    
    d.display();
    m.display2();
    return 0;
}

// Task 5 Output

// Enter your name (first name and last name) : rizwan md
// Enter your eno , edept & esal : 1 product 100000

// First name of the employee : rizwan
// Last name of the employee : md
// The no of the employee is : 1
// The dept : product
// The salary of the employe : 100000
// The department number is : 21
// The department name is : information technology
// Experience is : 5
// Designation : manager
// Manager Salary : 100000

