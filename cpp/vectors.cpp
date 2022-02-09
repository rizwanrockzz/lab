// sort vector

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    vector<int> a;
    a.push_back(10);
    a.push_back(4);
    a.push_back(7);
    a.push_back(189);
    a.push_back(2);
    a.push_back(1);

    sort(a.begin(),a.end());
    
    for (auto i = a.begin(); i != a.end(); i++)
		cout << *i << " ";
	
    return 0;
}


// LINEAR SEARCH

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    vector<int> a;
    a.push_back(10);
    a.push_back(4);
    a.push_back(7);
    a.push_back(189);
    a.push_back(2);
    a.push_back(1);

    int key,ans=0;
    cout<<"Enter key : ";
    cin>>key;
    // sort(a.begin(),a.end());
    
    for(auto i=a.begin();i!=a.end();i++){
        // cout<<i<<" ";
        if(*i==key){
            ans = 1;
            break;
        }
    }
    
    if(ans){
        cout<<"Element found";
    }
    else{
        cout<<"Element not found";
    }


    return 0;
}
