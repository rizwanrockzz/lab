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
