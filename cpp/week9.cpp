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





#include <iostream>
using namespace std;

class Employee{
    
};

class Boss:public Employee{
    
};

class Weekly:public Employee{
    
};

class Piecewish:public Employee{
    
};

class Hourly:public Employee{
    
};

int main(){
	

	return 0;
}
