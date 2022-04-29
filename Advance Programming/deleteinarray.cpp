#include <iostream>
using namespace std;

int prime(int n){
    int flag=1;
    if (n == 0 || n == 1) {
        flag = 0;
    }
    else{
        for(int i=2;i<n;i++){
            if(n%i == 0){
                flag = 0;
                break;
            }
        }
    }
    return flag;
}

int deleteElement(int arr[], int n, int x)
{
    int i;
    for (i=0; i<n; i++){
        if (arr[i] == x)
            break;
    }
        
    if (i < n)
    {
        n = n - 1;
        for (int j=i; j<n; j++)
            arr[j] = arr[j+1];
    }
     
    return n;
}

int main()
{
    // int arr[] = {11,3,1,5,12,14,18,7}; 11 3 1 5 12 14 18 7
    int arr[10];
    int pr[10],j=0;
    int n,t;
    cout<<"Enter the no of elements : ";
    cin>>n;
    
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    for(int i=0;i<n;i++){
        if(prime(arr[i])){
            pr[j]=arr[i];
            j++;
        }
    }
    
    for(int i=0;i<j;i++){
        n = deleteElement(arr, n, pr[i]);
    }
    
    cout<<"Modified Array is : ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}


// OUTPUT

// Enter the no of elements : 8
// 11 3 1 5 12 14 18 7
// Modified Array is : 1 12 14 18 
