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
