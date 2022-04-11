#include <iostream>
#include <regex>
using namespace std;

int main()
{
    string s,p;
    cin>>s;
    cin>>p;
    
    regex t(p);
    
    if (regex_match(s,t)){
        cout<<"True";
    }
    // if (regex_match(s.begin(),s.end(),t)){
    //     cout<<"True";
    // }
    else{
        cout<<"False";
    }

    return 0;
}
