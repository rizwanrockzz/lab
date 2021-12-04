/* Method Overloading */

#include<iostream>
using namespace std;

class A
{

public:
  int add (int a, int b);
  int add (int a, int b, int c);
  int add (int a, int b, int c, int d);
};

int A::add (int a, int b)
{
  return a + b;
}

int A::add (int a, int b, int c)
{
  return a + b + c;
}

int A::add (int a, int b, int c, int d)
{
  return a + b + c + d;
}


int main ()
{
  A a;
  int a1, b1, c1, d1;
  cout << "Enter a :";
  cin >> a1;
  cout << "Enter b :";
  cin >> b1;
  cout << "Enter c :";
  cin >> c1;
  cout << "Enter d :";
  cin >> d1;
  cout <<"Sum of a ,b is : "<< a.add (a1, b1) << endl;
  cout <<"Sum of a ,b ,c is : "<< a.add (a1, b1, c1) << endl;
  cout <<"Sum of a ,b ,c ,d is : "<< a.add (a1, b1, c1, d1) << endl;

  return 0;
}


/* Movie Ticket Reservation */

#include<iostream>
using namespace std;

class Movie
{   
public:
    int age;
    static int ticketCount,totalSeats;  
    void checkAge();
};

int Movie::ticketCount = 0;   // initially total seats filled is 0
int Movie::totalSeats = 50;   // total 50 seats in theater 

void Movie::checkAge()
{   
    cout<<"Total no of tickets available : "<<totalSeats<<endl;
    cout<<"Enter your age : ";
    cin>>age;
    if (age>18)
    {
        ticketCount++;
        cout<<"your ticket is booked"<<endl<<endl;
        totalSeats--;
    }
    else if(totalSeats == 0)
    {
        cout<<"House full,Try again for next show.";
    }
    else
    {
        cout<<"Your are not allowed to watch the movie"<<endl;
    }
}

int main()
{
    int num;
    cout<<"Enter number of tickets to be booked : ";
    cin>>num;
    Movie m[num];
    for (int i=0;i<num;i++)
    {
       m[i].checkAge();
    }
  
    cout<<"Age information of all the people who tried to book tickets\n";
    for (int i=0;i<num;i++)
    {
        cout<<"Person "<<i+1<<" age is "<<m[i].age<<"\n";
    }
    
    return 0;
}



