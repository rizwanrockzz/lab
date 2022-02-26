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







// 3rd task

#include <iostream>
#include <iterator>
#include <list>
using namespace std;

void showlist(list<int> g)
{
// 	list<int>::iterator it;
	for (auto it = g.begin(); it != g.end(); ++it)
		cout << '\t' << *it;
	cout << '\n';
}

int main()
{

	list<int> gqlist1, gqlist2;

	for (int i = 0; i < 10; ++i) {
		gqlist1.push_back(i * 2);
		gqlist2.push_front(i * 3);
	}
	cout << "\nList 1 (gqlist1) is : ";
	showlist(gqlist1);

	cout << "\nList 2 (gqlist2) is : ";
	showlist(gqlist2);

	cout << "\ngqlist1.front() : " << gqlist1.front()<<endl;
	cout << "\ngqlist1.back() : " << gqlist1.back()<<endl;

	cout << "\ngqlist1.pop_front() : ";
	gqlist1.pop_front();
	showlist(gqlist1);

	cout << "\ngqlist2.pop_back() : ";
	gqlist2.pop_back();
	showlist(gqlist2);

	cout << "\ngqlist1.reverse() : ";
	gqlist1.reverse();
	showlist(gqlist1);

	cout << "\ngqlist2.sort(): ";
	gqlist2.sort();
	showlist(gqlist2);

	return 0;
}

// output:
// List 1 (gqlist1) is :   0       2       4       6       8       10      12      14      16      18

// List 2 (gqlist2) is :   27      24      21      18      15      12      9       6       3       0

// gqlist1.front() : 0

// gqlist1.back() : 18

// gqlist1.pop_front() :   2       4       6       8       10      12      14      16      18

// gqlist2.pop_back() :    27      24      21      18      15      12      9       6       3

// gqlist1.reverse() :     18      16      14      12      10      8       6       4       2

// gqlist2.sort():         3       6       9       12      15      18      21      24      27










