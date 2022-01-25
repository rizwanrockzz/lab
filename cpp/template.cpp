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






// sum 
#include <iostream>
using namespace std;

template<typename T1,typename T2>
void sum_of_two(T1 a,T2 b){
    cout<<"Sum of two is : "<<a+b<<endl;
}
    

int main()
{
    sum_of_two(7.3,8.2);
    
    return 0;
}






//swap
#include <iostream>
using namespace std;

template <typename t1,typename t2>
    void swapit(t1 a,t2 b){
        t1 temp = *a;
        *a = *b;
        *b = temp;
        
    }

int main()
{
    int a = 10.2;
    int b = 98;
    cout<<"a : "<<a<<"  b : "<<b<<endl;
    swapit(&a,&b);
    cout<<"a : "<<a<<"  b : "<<b<<endl;
    return 0;
}






// class template linear search

#include<iostream>
using namespace std;

template<class T1>
class Test
{
		T1 *arr,n,key,check = 0,ans;
	public:
		Test(T1 *x, T1 y,T1 z)
		{
			arr = x;
			n = y;
			key = z;
		}
		void show()
		{
		    for(int i=0;i<n;i++){
		        cout<<"arr["<<i<<"] is : "<<arr[i]<<" "<<endl;
		    }
		    
		    for(int i=0;i<n;i++){
                if(arr[i]==key){
                    ans = i;
                    check = 1;
                    break;
                }
            }
            
            if(check){
                cout<<key<<" found at index : "<<ans<<endl;
            }
            else{
                cout<<"Element not found"<<endl;
            }
		}
};

int main()
{
    
    
    int arr[] = {4,2,6,1,9};
    int n = sizeof(arr)/sizeof(int);
    int key;
    cout<<"Enter an element to search : ";
    cin>>key;
	Test <int>t(arr, n,key);
	t.show();
	
	return 0;
}







// for addition

#include <bits/stdc++.h>
using namespace std;



template <class T>

    void addit(T t1,T t2)
    {
    	cout << "Addition is : "<< t1+t2 << "\n";
    }
    
    void addit(int t1,int t2)
    {
    	cout << "Addition for only int is : "<< t1+t2 << "\n";
    }

int main()
{
    addit(10,12);
    addit(11.5,3);

	return 0;
}

