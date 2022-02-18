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





