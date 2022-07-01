// C++ program to words in a sentence.
#include <bits/stdc++.h>
using namespace std;
 
void removeDupWord(char str[])
{
    unordered_set<int> myset;
    vector<string> arr;
    vector<int> countarr;
    int count;
    string temp;
 
        char *token = strtok(str, " ");
 
        while (token != NULL)
        {
                arr.push_back(token);
                token = strtok(NULL, " ");
        }
        cout<<"vector"<<endl;
       
        for (int i=0;i<arr.size();i++){
            cout<<arr[i]<<" - ";
        }
       
        cout<<endl<<endl;
        count = 0;
    for (int i=0;i<arr.size();i++){
            temp = arr[i];
            for (int j=0;j<arr.size();j++){
                if (arr[j]==temp){
                    count++;
                }
            }
            countarr.push_back(count);
            cout<<"count of  : "<<temp<<" : "<<count<<" "<<endl;
            count = 0;
        }
       
       
        cout<<endl<<endl<<endl;
        for(int i=0;i<countarr.size();i++){
           // cout<<countarr[i]<<endl;
            if(countarr[i]>1){
                myset.insert(countarr[i]);
                cout<<"count of "<<arr[i]<<" is : "<<countarr[i]<<endl;
            }
        }
       
       
       
       
}
 
// Driver code
int main()
{
        char str[] = "i am a good and a good boy";
        removeDupWord(str);
        return 0;
}
