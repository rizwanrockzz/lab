// 6b

#include <iostream>
using namespace std;

int main()
{
    string phno;
    cout<<"Enter your phone number : ";
    cin>>phno;
    cout<<"Entered phno is : "<<phno<<endl;
    int len = phno.length();
    
    try{
        if(len == 5){
            cout<<phno<<" is a valid phone number\n";
        }
        else{
            throw len;
        }
    }
    
    catch (int len) {
	    cout <<phno<<" is not a valid phone number\n";
	    cout<<"Its length is : "<<len;
    }

    return 0;
}

// Enter your phone number : 121341516
// Entered phno is : 121341516
// len is : 9
// 121341516 is not a valid phone number
// Its length is : 9





//2b

#include <iostream>
using namespace std;

int main()
{
    float a,b,c;
    cout<<"Enter numerator and denominator (num den) : ";
    cin>>a>>b;
    
    try{
        
        if(b == 0){
            throw b;
        }
        else{
            c = a/b;
            cout<<"Divison of "<<a<<"/"<<b<<" is : "<<c<<endl;
        }
    }
    
    catch (float b) {
        cout<<"The value is infinity"<<endl;
	    cout<<"0.000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001";
    }

    return 0;
}

// Enter numerator and denominator (num den) : 10 0
// 0.000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001





