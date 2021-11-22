/* Destructors */

#include <iostream>
using namespace std;

class Person{
    int age;
    float salary;
    string name;
    
    public:
    
     Person(){
         cout<<"Inside Constructor"<<endl;
         age = 20;
         salary = 500000;
         name = "demo name";
         
     }
     
       Person(int a,float b,string c){
         cout<<"Inside Parameterized Constructor"<<endl;
         age = a;
         salary = b;
         name = c;
         
     }
     
     void putData();
     void getData();
     
     ~Person(){
         cout<<"Inside Destructor"<<endl;
     }
    
};

void Person::putData(){
    cout<<"Name of person is : "<<name<<endl;
    cout<<"Age of person is : "<<age<<endl;
    cout<<"Salary of person is : "<<salary<<endl;
}

void Person::getData(){
    cout<<"Enter person name : ";
    cin>>name;
    cout<<"Enter person age : ";
    cin>>age;
    cout<<"Enter person salary : ";
    cin>>salary;
}

int main()
{
    Person p;
    p.getData();
    p.putData();


    return 0;
}
