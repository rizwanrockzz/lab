// Given a set of non-negative integers, and a value sum, determine if there is a subset of the given set with sum equal to 
// given sum. 
// Example: 
// Input: set[] = {3, 34, 4, 12, 5, 2}, sum = 9
// Output: True  
// There is a subset (4, 5) with sum 9.

// Input: set[] = {3, 34, 4, 12, 5, 2}, sum = 30
// Output: False
// There is no subset that add up to 30.



#include <bits/stdc++.h>
using namespace std;

bool allPossibleSubset(int arr[], int n,int req)
{
    int sum=0,flag = 0;
    int count = pow(2, n);
    for (int i = 0; i < count; i++) {
        for (int j = 0; j < n; j++) {
            if ((i & (1 << j)) != 0)
                sum = sum+arr[j] ;
        }
        if(sum==req){
            flag = 1;
            break;
        }
        sum = 0;
        
    }
    return flag;
}

int main()
{
    
    int n;
    cout<<"Enter n : ";
    cin>>n;
    int arr[n];
    int sum;
    cout<<"Enter sum : ";
    cin>>sum;
    cout << "Enter Elements of the set : ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    if(allPossibleSubset(arr, n,sum))
        cout<<"There is a subset with sum "<<sum<<"\n";
    else
        cout<<"There is no subset that add up to "<<sum<<endl;

    return 0;
}








