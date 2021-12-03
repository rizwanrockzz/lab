/* 1b */
#include<iostream>
#include<stdio.h>
using namespace std;
class movie
{   
    public:
    int ag;
    static int count,c;  
    void age();
};
int movie::count=0;   // initially total seats filled is 0
int movie::c=50;      // total 50 seats in theater 
void movie::age()
{   
    cout<<"total no_of tickets available="<<c<<endl;
    cout<<"enter your age:"<<endl;
    cin>>ag;
    if (ag>18)
    {
        count++;
        cout<<"your ticket is booked"<<endl<<endl;
        c--;
    }
    else if(c==0)
    {
    cout<<"house is full";
    }
    else
    {
        cout<<"your are not allowed to watch the movie"<<endl<<endl;
    }
}
int main()
{
    int num;
    cout<<"Enter number of tickets to be booked.";
    cin>>num;
   movie m[num];
   for (int i=0;i<num;i++)
   {
       m[i].age();
   }
  
   cout<<"Age information of all the people who tried to book tickets\n";
   for (int i=0;i<num;i++)
   {
       
     cout<<"Age of "<<i+1<<"persion is"<<m[i].ag<<"\n";
   }
    return 0;
}




/* 2b */
#include <iostream>
using namespace std;
 
class Student
{
    int roll;
    string name;
public:
    void read();
    void display();
};
 
void Student::read(){
    cout<<"Enter Name : ";
    cin>>name;
    cout<<"Enter Roll no : ";
    cin>>roll;
}
 
void Student::display(){
    cout<<"Name of student is : "<<name<<endl;
    cout<<"Roll no of student is : "<<roll<<endl;
}
 
int main()
{
    Student s1,s2,s3,s4,s5;
    
    s1.read();
    s1.display();
    s2.read();
    s2.display();
    s3.read();
    s3.display();
    s4.read();
    s4.display();
    s5.read();
    s5.display();
 
    return 0;
}
 



/* 5b */

#include <iostream>
using namespace std;
 
class Book{
   int bookno,price;
   string authorname,bookname;
 public:
    Book(int a,string b,int c,string d){
        bookno = a;
        bookname = b;
        price = c ;
        authorname = d;
    }
    void display();
    
};
 
void Book::display(){
    cout<<"The number of book is : "<<bookno<<endl;
    cout<<"The name of book is : "<<bookname<<endl;
    cout<<"The price of book is : "<<price<<endl;
    cout<<"The author of book is : "<<authorname<<endl;
}
 
int main()
{
    string bname,aname;
    int bookno,bookp;
    cout<<"Enter book number : ";
    cin>>bookno;
    cout<<"Enter book name : ";
    cin>>bname;
    cout<<"Enter book price : ";
    cin>>bookp;
    cout<<"Enter name of author : ";
    cin>>aname;
    Book b(bookno,bname,bookp,aname);
    b.display();
    
    return 0;
}


/* 6b */
#include <iostream>
using namespace std;
 
class Bank
{
    int accno,bal,amount,draw;
    string name,type;
public:
 void InsertCustomerDetails();
 void depositAmount();
 void withdrawAmount();
 void display();
    
};

void Bank::InsertCustomerDetails(){
    cout<<"Enter your information :"<<endl<<endl;
    cout<<"Enter account number : ";
    cin>>accno;
    cout<<"Enter account type : ";
    cin>>type;
    cout<<"Enter your name : ";
    cin>>name;
    cout<<"Enter your account balance : ";
    cin>>bal;
}

void Bank::depositAmount(){
    cout<<"Deposit yout money"<<endl<<endl;
    cout<<"Your current balance is : "<<bal<<endl;
    cout<<"Enter the amount to be deposited : ";
    cin>>amount;
    bal = bal+amount;
    cout<<"Your current balance is : "<<bal<<endl;
}
 
void Bank::withdrawAmount(){
    cout<<"Withdraw Amount"<<endl;
    cout<<"Your current balance is : "<<bal<<endl;
    cout<<"Enter the amount of money to withdraw : ";
    cin>>draw;
    if (draw>bal){
        cout<<"Funds Insuffiecient"<<endl;
        cout<<"Try withdrawing lesser amount"<<endl;
    }
    else{
        cout<<"Please take your cash "<<endl;
        bal = bal-draw;
        cout<<"Your current balance is : "<<bal<<endl;
    }
}

void Bank::display(){
    cout<<"Your Bank Details "<<endl<<endl;
    cout<<"Your name is : "<<name<<endl;
    cout<<"Your account number is : "<<accno<<endl;
    cout<<"Your account type is : "<<type<<endl;
    cout<<"Your account balance is : "<<bal<<endl;
}
 
int main()
{
    Bank b;
    b.InsertCustomerDetails();
    b.depositAmount();
    b.withdrawAmount();
    b.display();
 
    return 0;
}
 
