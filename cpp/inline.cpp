/* Inline functions in c++ */

#include <iostream>
using namespace std;

inline int add(int x,int y){
    return x+y;
}

inline int sub(int x,int y){
    return x-y;
}

inline int mul(int x,int y){
    return x*y;
}

inline int square(int n){
    return n*n;
}

inline int cube(int n){
    return n*n*n;
}


int main()
{
    int a,b,n;
    cout<<"Enter a,b and n : ";
    cin>>a>>b>>n;
    
    cout<<"Addition of "<<a<<"+"<<b<<" is : "<<add(a,b)<<endl;
    cout<<"Subtraction of "<<a<<"-"<<b<<" is : "<<sub(a,b)<<endl;
    cout<<"Multiplication of "<<a<<"*"<<b<<" is : "<<mul(a,b)<<endl;
    cout<<"Square of "<<n<<" is : "<<square(n)<<endl;
    cout<<"Cube of "<<n<<" is : "<<cube(n)<<endl;

    return 0;
}
