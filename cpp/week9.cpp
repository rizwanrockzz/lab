//  PROGRAM 1

#include <iostream>
using namespace std;

class Shape{
protected:
	double a,b;
public:
	virtual void display() = 0;
	void getdata(){
		cout<<"Entert dimension 1 : ";
		cin>>a;
		cout<<"Entert dimension 2 : ";
		cin>>b;
	}

};

class Triangle:public Shape{
public:
	void display(){
		cout<<"Area of triangle is : "<<0.5*a*b;
	}

};

class Rectangle:public Shape{
public:
	void display(){
		cout<<"Area of rectangle is : "<<a*b;
	}

};

int main(){
	Triangle t;
	Rectangle r;
	cout<<"Enter the dimensions for triangle\n\n";
	t.getdata();
	t.display();
	cout<<"Enter the dimensions for rectangle\n\n";
	r.getdata();
	r.display();

	return 0;
}



//program 2

#include <iostream>
using namespace std;

class Employee{
    
};

class Boss:public Employee{
public:
    cout<<"The salary of the boss is : 100000\n\n";
};

class Weekly:public Employee{
public:
    cout<<"The salary for week is : 5000\n\n";
};

class Piecewish:public Employee{
public:
    int pieces;
    cout<<"Enter the no of pieces produced : ";
    cin>>pieces;
    cout<<"Your salary for "<<pieces<<" pieces is : "<<pieces*20;
};

class Hourly:public Employee{
    int hours;
    cout<<"Enter the no of hours worked : ";
    cin>>hours;
    cout<<"Your salary for "<<hours<<" hours is : "<<hours*100;
};

int main(){
	

	return 0;
}
