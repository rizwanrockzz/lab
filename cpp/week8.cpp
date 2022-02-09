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


