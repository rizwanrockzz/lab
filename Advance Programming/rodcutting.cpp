#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int max(int a, int b) { return (a > b)? a : b;}

int cutRod(int price[], int n)
{
    int val[n+1];
    val[0] = 0;
    int i, j;
    
    for (i = 1; i<=n; i++)
    {
    	int max_val = INT_MIN;
    	for (j = 0; j < i; j++)
    		max_val = max(max_val, price[j] + val[i-j-1]);
    	val[i] = max_val;
    }
    
    return val[n];
}

/*****************************

//        debug

int cutRod(int price[], int n)
{
    int val[n+1];
    val[0] = 0;
    int i, j;
    
    for (i = 1; i<=n; i++)
    {
    	int max_val = INT_MIN;
    	for (j = 0; j < i; j++){
    	    cout<<"max val : "<<max_val<<", price[j] + val[i-j-1] : "<<price[j] + val[i-j-1]<<", price["<<j<<"] : "<<price[j]<<", i-j-1 : "<<i-j-1<<", val[i-j-1] : "<<val[i-j-1]<<endl;
    		max_val = max(max_val, price[j] + val[i-j-1]);
    		cout<<"After Max val : "<<max_val<<endl;
    	}
    	val[i] = max_val;
    	cout<<"val["<<i<<"] : "<<val[i]<<endl<<endl<<endl;
    }
    
    return val[n];
}

*******************************/


int main()
{
	int arr[] = {1, 5, 8, 9, 10, 17, 17, 20};
	int size = sizeof(arr)/sizeof(arr[0]);
	cout <<"Maximum Obtainable Value is \n\n"<<cutRod(arr, size);
	return 0;
}







