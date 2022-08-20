n,k = map(int,input().split())

ele = list(map(int,input().split()))[:n]

for _ in range(k):
    maxi = ele.index(max(ele))
    ele[maxi] = ele[maxi]//2
    print(ele)
    
print(sum(ele))
    

#include <bits/stdc++.h>
# using namespace std;

# void findMax(vector<int> v,int k){
#     int maxi = -1,ind;
#     for(int i=0;i<v.size();i++){
#         if(maxi<v[i]){
#             maxi = v[i];
#             ind = i;
#         }
        
#     }
    
#     for(int j=0;j<k;j++){
#         vec[ind] = vec[ind]/2;
#         cout<<vec[ind]<<endl;
#         for(auto i=0;i<n;i++){
#             cout<<vec[i]<<" ";
#         }
#     }
# }

# int main()
# {
#     int n,k,ele,maxi;
#     cin>>n;
#     cin>>k;
#     vector<int> vec;
    
#     for(int i=0;i<n;i++){
#         cin>>ele;
#         vec.push_back(ele);
#     }
    
#     for(auto i=0;i<n;i++){
#         cout<<vec[i]<<" ";
#     }
    
#     cout<<endl;
#     findMax(vec,k);
    

    
    

#     return 0;
# }
