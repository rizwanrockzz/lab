#include<iostream>
using namespace std;
class Test
{
    public:
	int a; 
	void get()
	{
		cin>>a;	}
	void compare(Test t2) 
	{
		if(a==t2.a) cout<<"both objs are same";
		else cout<<"both objs are not same";
	}
};

int main()
{
    Test t1,t2;
    cout<<"enter the value for t1 obj : ";
    t1.get();
    cout<<"enter the value for t2 obj : ";
    t2.get();
    t1.compare(t2);
    return 0;
}







#include<iostream>
using namespace std;
class Test
{
    public:
	int a; 
	void get()
	{
		cin>>a;	
	}
		
	
	void operator ==(Test t2)
	{
		if(a==t2.a) cout<<"both objs are same";
		else cout<<"both objs are not same";
	}
};
int main()
{
    Test t1,t2;
    cout<<"enter the value for t1 obj : ";
    t1.get();
    cout<<"enter the value for t2 obj : ";
    t2.get();
    
    t1==t2;
    return 0;
}








