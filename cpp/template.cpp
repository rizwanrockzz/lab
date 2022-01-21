// design a template function which returns the maximum value among two numbers

#include<iostream>
using namespace std;

template <typename T>
T max_number(T a,T b){
    // return max(a,b);
    return a>b?a:b;
}

int main(){  
    cout<<max_number(10.23,111.1)<<endl;
    return 0;
}

// BUBBLE SORT

#include <iostream>
using namespace std;

template<typename T>
    void bubblesort(T arr,int n){
        for (int i = 0; i < n-1; i++){
            for (int j = 0; j < n-i-1; j++) 
                if (arr[j] > arr[j+1]) 
                    swap(arr[j], arr[j+1]);
        }    
            
    }


// or

template<typename T>
    void bubblesort(T arr,int n){
        sort(arr, arr + n);
    }


int main()
{
    int a1[6] = {6,2,8,1,9,3};
    int n1 = sizeof(a1)/sizeof(a1[0]);
    bubblesort(a1,n1);
    
    
    for(int i=0;i<n1;i++){
        cout<<a1[i]<<" ";
    }
    cout<<endl<<endl;
    
    float a2[5] = {10.4,2.6,3.1,1.02,6.7};
    int n2 = sizeof(a2)/sizeof(a2[0]);
    bubblesort(a2,n2);
    
    
    for(int i=0;i<n2;i++){
        cout<<a2[i]<<"  ";
    }

    return 0;
}
