// Task 1

// 1.	Create a base class called person with SSN  and name as data types with getdata and display as 
// member functions. Derive a  new class called student with rollno, branch,mark1,mark2,mark3 as 
// datamembers and getdata and display  as member functions and finally derive a new  class called grade 
// from student class in that calculate the average for marks and display the  grade for the  student 
// a. A grade >=90%
// b. B grade>=80%
// c. C grade>=70%
// d. Less than 70% fail.  

#include<iostream>
using namespace std;

class person
{
    string SSN;
    string name;
    public:
    void getdata()
    {
        cout<<"Enter the SSN : ";
        cin>>SSN;
        cout<<"Enter the name : ";
        cin>>name;
    }
    void display()
    {
        cout<<"The SSN is "<<SSN<<endl;
        cout<<"The name is"<<name<<endl;
    }
    
};

class student:public person
{
public:
    int roll_no;
    string branch;
    float mark1,mark2,mark3;
    void setdata()
    {
        cout<<"Enter the roll no and branch : ";
        cin>>roll_no>>branch;
        cout<<"Enter the marks in three subjects : ";
        cin>>mark1>>mark2>>mark3;
    }
    void show()
    {
        cout<<"The roll no and branch of a student : "<<roll_no<<" , "<<branch<<endl;
        cout<<"The marks "<<mark1<<" , "<<mark2<<" , "<<mark3<<endl;
    }
};

class grade:public student 
{
public:
    float grade;
    void showGrade()
    {
        grade=(mark1+mark2+mark3)/3;
        if (grade>=90)
        {
            cout<<"A grade"<<endl;
        }
        else if(grade>=80)
        {
            cout<<"B grade"<<endl;
        }
        else if(grade>=70)
        {
            cout<<"C grade"<<endl;
        }
        else
        {
            cout<<"fail"<<endl;
        }
    }
};
int main()
{
    grade g;
    g.getdata();
    g.setdata();
    g.display();
    g.show();
    g.showGrade();
    return 0;
}

// Task 7 Output

// The SSN is exam
// The name isrizwan
// The roll no and branch of a student : 99 , IT
// The marks 90 , 89 , 99
// A grade








// Task 3

// 3.Display the total number credits gained by the student and identify the inheritance.

#include<iostream>
using namespace std;
class student 
{
    public:
    int sno;
    string sname;
    string branch;
    void read(int a,string b,string c)
    {
        sno=a;
        sname=b;
        branch=c;
    }
    void display()
    {
        cout<<"Student no : "<<sno<<endl;
        cout<<"Student name : "<<sname<<endl;
        cout<<"Branch : "<<branch<<endl;
    }
    
};

class test:virtual public student
{
public:
    int sem1,sem2,sem3,test_cre;
    void get(int a,int b,int c)
    {
        sem1=a;
        sem2=b;
        sem3=c;
        test_cre=sem1+sem2+sem3;
    }
};

class sports:virtual public student
{
    public:
    int ncc,nss,others,sport_cre;
    void getdata(int a,int b,int c)
    {
        ncc=a;
        nss=b;
        others=c;
        sport_cre=ncc+nss+others;
    }
};

class result:public test,public sports
{
    public:
    int res;
    void show3()
    {
        res=test_cre+sport_cre;
        cout<<"Total no of credits gained by the student :"<<res;
    }
};

int main()
{ 
  result r;
  r.read(1,"Rizwan","IT");
  r.display();
  
  r.get(3,3,2);
  r.getdata(2,2,1);
  r.show3();
  return 0;
  
}
// Task 3 Output

// Student no : 1
// Student name : Rizwan
// Branch : IT
// Total no of credits gained by the student :13


