#include <iostream>
#include <vector>
using namespace std;

int findIndex(vector<int> arr,int target){
    int n = arr.size();
    int i,ind,low=0,high=n-1,mid;
    while(low<=high){
        mid = (low+high)/2;
        if(arr[mid]==target){
            return mid;
            break;
        }
        else if(arr[mid]<target){
            low = mid+1;
            ind = mid+1;
        }
        else{
            high = mid-1;
            ind = mid;
        }
    }
    return ind;
}

int main()
{
    int i,n;
    vector<int> nums={1,3,5,6};
    // int target = 5;
    // int target = 2;
    int target = 7;
    
    cout<<findIndex(nums,target);

    return 0;
}

// OUTPUT

// 2
// 1
// 4


