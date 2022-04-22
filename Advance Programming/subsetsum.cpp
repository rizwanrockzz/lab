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




//                     ( or  )






#include <iostream>
using namespace std;

bool isSubsetSum(int set[], int n, int sum)
{

	if (sum == 0)
		return true;
	if (n == 0)
		return false;

	if (set[n - 1] > sum)
		return isSubsetSum(set, n - 1, sum);

	return isSubsetSum(set, n - 1, sum) || isSubsetSum(set, n - 1, sum - set[n - 1]);
}


int main()
{
	int set[] = { 3, 34, 4, 12, 5, 2 };
	int sum = 9;
	int n = sizeof(set) / sizeof(set[0]);
	if (isSubsetSum(set, n, sum) == true)
		cout <<"Found a subset with given sum";
	else
		cout <<"No subset with given sum";
	return 0;
}


















