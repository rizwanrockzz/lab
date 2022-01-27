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
    void setP(string a,string b){
        firstname = a;
        lastname = b;
    }
};

class Employee:public Person
{
public:
    int eno,esal;
    string edept;

    void setE(int a,string b,int c){
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
    Person p;
    p.setP("hii","rizwan");
    Employee e;
    e.setE(1,"marketing",100000);
    e.display();
    
    return 0;
}




// OR


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



// Q5.	Create a class named Employee with the following details
//  Data members:
// (a)	name (b) address (c) age (d) gender
// Methods :
// 	(a ) Display () to show the employee details
// Create another class FullTimeEmployee that inherits the Employee class :
// 	Data members :
// (a)	Salary	Designation
// Method :
// (a)	Display () to show the salary and designation along  with other employee details.
// Create another class PartTimeEmployee that inherits the Employee class :
// 	Data members :
// (a)	Workinghours	rateperhour
// Methods :
// (a)	caluculatepay() to caluculate the amount payable
// (b)	display() to show the amount payable along with the employee details.
// Create objects of these classes and call their methods .use appropriate constructors.


#include <iostream>
using namespace std;

class Employee{
public:
    string name,address,gender;
    int age;
    Employee(string a,string b,string c,int d){
        name = a;
        address = b;
        gender = c;
        age = d;
    }
    // void display();
};


class FullTimeEmployee:public Employee{
public:
    int salary;
    string designation;
    FullTimeEmployee(string a,string b,string c,int d,int e,string f):Employee(a,b,c,d){
        salary = e;
        designation = f;
    }
    void displayFullEmp();
};

void FullTimeEmployee::displayFullEmp(){
    cout<<"The salary of the Employee is : "<<salary<<endl;
    cout<<"The designation of the Employee is : "<<designation<<endl;
}

class PartTimeEmployee:public Employee{
public:
    int hours,rate;
    PartTimeEmployee(string a,string b,string c,int d,int e,int f):Employee(a,b,c,d){
        hours = e;
        rate = f;
    }
    float caluculatepay(int h,int r);
    void display();
};

float PartTimeEmployee::caluculatepay(int h,int r){
    return h*r;
}

void PartTimeEmployee::display(){
    cout<<"---Employee Details---\n"<<endl;
    cout<<"The name of the Employee is : "<<name<<endl;
    cout<<"The address of the Employee is : "<<address<<endl;
    cout<<"The gender of the Employee is : "<<gender<<endl;
    cout<<"The age of the Employee is : "<<age<<endl;
    cout<<"No of hours worked by Employee is : "<<hours<<endl;
    cout<<"Pay for each hour of the Employee is : "<<rate<<endl;
    cout<<"The part time salary of the Employee is : "<<caluculatepay(hours,rate)<<endl;
}

int main()
{
    // name address gender age hours rate
    PartTimeEmployee pte("john","near vja","Male",21,30,300);
    // name address gender age salary designation
    FullTimeEmployee fte("john","near vja","Male",21,100000,"Manager");
    pte.display();
    fte.displayFullEmp();
    
    return 0;
}






// Q6.	Create a class Employer with company_name and city. Create a parameterised method companyDetail
// (String, String) to set the values to the two variables.  Create a showCompanyDetails() method to display 
// the company information.
// Create a subclass Employee with eno,ename,esal. Create a parameterized constructor to set the values to 
// these variables. create a showEmployee() to display the information.
// Create a main method to test the classes

#include <iostream>
using namespace std;

class Employer{
public:
    string cname,city;
    void CompanyDetails(string a,string b);
    void ShowCompanyDetails();
};

void Employer::CompanyDetails(string a,string b){
    cname = a;
    city = b;
}

void Employer::ShowCompanyDetails(){
    cout<<"The company name is : "<<cname<<endl;
    cout<<"The city where comoany is located is : "<<city<<endl;
}

class Employee:public Employer{
public:
    int eno,salary;
    string ename;
    Employee(int a,string b,int c){
        eno = a;
        ename = b;
        salary = c;
    }
    void ShowEmployee();
};

void Employee::ShowEmployee(){
    cout<<"The Employee number is : "<<eno<<endl;
    cout<<"The Employee name is : "<<ename<<endl;
    cout<<"The Employee salary is : "<<salary<<endl;
}

int main()
{
    Employee e(1,"johndoe",100000);
    e.ShowEmployee();
    Employer er;
    
    er.CompanyDetails("abc inc","vja");
    er.ShowCompanyDetails();
    

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
