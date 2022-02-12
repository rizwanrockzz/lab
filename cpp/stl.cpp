// 2nd Task

#include <iostream>
using namespace std;

bool isTwoAlter(string s)
{
	for (int i = 0; i < s.length() - 2; i++) {
		if (s[i] != s[i + 2]) {
			return false;
		}
	}

	if (s[0] == s[1])
		return false;

	return true;
}

int main()
{
	string str;
	cout<<"Enter a string pattern : ";
	cin>>str;

	if (isTwoAlter(str))
		cout << "Yes";
	else
		cout << "No";

	return 0;
}
