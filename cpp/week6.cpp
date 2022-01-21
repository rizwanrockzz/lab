// STACK MENU DRIVEN

#include <iostream>
#include <stack>
#include<stdlib.h>
using namespace std;

int main()
{
    int b,x,key;
    stack<int> stack;
    
    while(1){
        cout<<"1.Push\n2.Pop\n3.Display\n4.Exit\n";
        cout<<"Enter your choice : ";
        cin>>key;
        switch(key){
            case 1:
                cout<<"Enter an element to push : ";
                cin>>x;
                stack.push(x);
                break;
            case 2:
                stack.pop();
                break;
            case 3:
                for (std::stack<int> dump = stack; !dump.empty(); dump.pop()){
                    cout << dump.top() << "  ";
                }
                cout<<endl;
                break;
            case 4:
                exit(0);
                break;
            default:
                cout<<"Enter a valid choice ";
        }
        
        
    }

    return 0;
}








// CHECK PALINDROME

#include <iostream>
#include <stack>
#include<stdlib.h>
using namespace std;

int main()
{
    int key,len,check=1;
    string word;
    char palindrom[30],a;
    stack<int> st;
    
    while(1){
        cout<<"1.Enter String\n2.Exit\n";
        cout<<"Enter your choice : ";
        cin>>key;
        switch(key){
            case 1:
                cout<<"Enter a string : ";
                cin>>word;
                len = word.length();
                for(int i=0;i<len;i++){
                    st.push(word[i]);
                }

                for(int i=0;i<len;i++){
                    a = st.top();
                    cout<<"a : "<<a<<"\n";
                    st.pop();
                    if(a!=word[i]){
                       check = 0;
                        break;
                    }
                }
                
                if (check==1){
                    cout<<word<<" is a palindrome\n";
                }
                else{
                    cout<<word<<" is not a palindrome\n";
                }
                break;
            case 2:
                exit(0);
                break;
            default:
                cout<<"Enter a valid choice\n";
        }
        
        
    }

    return 0;
}



























#include <iostream>
#include <cstring>
#include <string>
#include <stack>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the no of operations : ";
    cin>>n;
    int j=0;
    stack<int> st;
	char op[20];
	int arr[4];
	int max[n];
	for(int i=0;i<=n;i++){
	    cin.getline(op,20);

    	char * token;
    
    	token = strtok (op," ");
    	while (token != NULL)
        {
    		string abc(token);
    		int a = stoi(abc);
    		arr[j] = a;
    		token = strtok (NULL, " ");
    		j+=1;
        }
      
      
      
    //   for(int i=0;i<j;i++){
    //       cout<<arr[i]<<"    ";
    //   }
    
    if(arr[0]==1){
        st.push(arr[1]);
        max[i]=arr[1];
    }
    else if(arr[0]==2){
        st.pop();
    }
    
    else if(arr[0]==3){
        cout<<max(maxele)<<endl;
    }
      
    for(int i=0;i<j;i++){
      arr[i] = 0;
    }
      

      
      j=0;
      
      cout<<endl;
	}
	
	return 0;
}
