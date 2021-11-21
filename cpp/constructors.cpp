/* Without Using Constructor */

#include<iostream>
using namespace std;
 
class Person
{
  int age, salary;
  string name;
 public:
  void getData ();
  void putData ();
 
};
 
void Person::getData ()
{
  cout << "Enter Name : ";
  cin >> name;
  cout << "Enter Age : ";
  cin >> age;
  cout << "Enter Salary : ";
  cin >> salary;
}
 
void Person::putData ()
{
  cout << "\nThe Name of the person is: " << name<<endl;
  cout << "The Age of the person is: " << age<<endl;
  cout << "The Salary of the person is: " << salary<<endl;
}
 
int main (){
 
    Person p;
    p.getData();
    p.putData();
    
    return 0;
}
 
 
 
 
/* with default constructor */
 
 
#include<iostream>
using namespace std;
 
class Person{
    int age;
    float salary;
    string name;
    
public:
    void putData();
    
    Person(){
        age = 18;
        salary = 5000000;
        name = "rizwan";
    }
    
};
 
void Person::putData(){
    cout<<"Name of Person is : "<<name<<endl;
    cout<<"Age of Person is : "<<age<<endl;
    cout<<"salary of Person is :"<<salary<<endl;
    
}
 
int main(){
    Person p;
    p.putData();
    return 0;
}
 
/* with parametarized constructor */

#include<iostream>
using namespace std;
class Person
{
    int age;
    float salary;
    string name;
public:
    
    Person()
    {
        age=18;
        salary=5000000;
        name="rizwan";
    }
    Person(int a,float b,string c)
    {
        age=a;
        salary=b;
        name=c;
    }
    Person(int a, float b)
    {
        age=a;
        salary=b;
        name="vrsec";
    }
    void putData();
};

 
void Person::putData()
{
    cout<<"<-- Details of the candidate are -->"<<endl;
    cout<<endl;
    cout<<"Name of the person is:"<<name<<endl;
    cout<<"The age of the person is: "<<age<<endl;
    cout<<"The Salary of the person is: "<<salary<<endl;
}
int main()
{
    Person p; /* default constructor with no args will be invoked */
    Person p(20,500000,"ravi"); /*  constructor with three args will be invoked */
    Person p(19,400000,); /* name will be the default one */
    p.putData();
    return 0;
}
 
