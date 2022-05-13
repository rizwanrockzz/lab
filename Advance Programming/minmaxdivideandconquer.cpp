#include <iostream>
#include <vector>
#include <climits>
using namespace std;

void minAndMax(vector<int> &arr, int low, int high, int &min, int &max){
    // base condition if there is one element
    if (low == high)                    
    {
        if (max < arr[low]) {          
            max = arr[low];
        }
 
        if (min > arr[high]) {          
            min = arr[high];
        }
 
        return;
    }
    
    // if there are two elements
    
    if (high - low == 1)            
    {
        if (arr[low] < arr[high])       
        {
            if (min > arr[low]) {       
                min = arr[low];
            }
 
            if (max < arr[high]) {     
                max = arr[high];
            }
        }
        else {
            if (min > arr[high]) {      
                min = arr[high];
            }
 
            if (max < arr[low]) {       
                max = arr[low];
            }
        }
        return;
    }
    
    int mid = (low + high) / 2;

    minAndMax(arr, low, mid, min, max);

    minAndMax(arr, mid + 1, high, min, max);
}



int main()
{
    vector<int> arr = { 7, 2, 9, 3, 1, -6, 7, 8, 4 };
    int max = INT_MIN;
    int min = INT_MAX;
    
    int n = arr.size();
    
    minAndMax(arr, 0, n - 1, min, max);
    
    cout << " Minimum array element is " << min << endl;
    cout << " Maximum array element is " << max << endl;
    

    return 0;
}









