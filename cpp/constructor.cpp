//WITHOUT USING A CONSTRUCTOR
 
#include <iostream>
using namespace std;
 
class Person
{
  int age, salary;
  char name[50];
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
 
 
 
// with default constructor
 
 
#include<iostream>
using namespace std;
 
class Person{
    int age;
    float salary;
    char* name;
    
public:
    void putData();
    
    Person(){
        age = 18;
        salary = 125000.12500;
        name = "rizwan";
    }
    
};
 
void Person::putData(){
    cout<<"Name of Person is : "<<name;
    cout<<"Age of Person is : "<<age;
    cout<<"salary of Person is :"<<salary;
    
}
 
int main(){
    Person p;
    p.putData();
    return 0;
}
 
 
#include<iostream>
using namespace std;
class Person
{
    public:
    int age;
    float salary;
    char* name;
    Person()
    {
        age=29;
        salary=30;
        name="pavan";
    }
    Person(int a,float b,char* c)
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
    // void getData();
    void putData();
};
 
// void Person::getData()
// {
//     cout<<"Enter age";
//     cin>>age;
//     cout<<"Enter Salary";
//     cin>>salary;
//     cout<<"Enter name of the person";
//     cin>>name;
// }
 
void Person::putData()
{
    cout<<"\nDetails of the candidate are \n";
    cout<<"\nName of the person is:"<<name<<"\n";
    cout<<"\nThe age of the person is: "<<this->age;
    cout<<"\nThe Salary of the person is: "<<salary;
}
int main()
{
    // Person p; // default constructor with no args will be invoked
    Person p(29,30.3,"pavan"); //  constructor with three args will be invoked
    // Person p(20,203.3,"for (int i = 0; i < count; i++) {
        /* code */
    p.putData();
    return 0;
}
 