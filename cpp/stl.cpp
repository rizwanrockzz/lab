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








// 4th task 

#include <deque>
#include <iostream>
using namespace std;

void showdq(deque<int> g)
{
	deque<int>::iterator it;
	for (it = g.begin(); it != g.end(); ++it)
		cout << '\t' << *it;
	cout << '\n';
}

int main()
{
	deque<int> gquiz;
	gquiz.push_back(10);
	gquiz.push_front(20);
	gquiz.push_back(30);
	gquiz.push_front(15);
	cout << "The deque gquiz is : ";
	showdq(gquiz);

	cout << "\ngquiz.size() : " << gquiz.size()<<endl;
	cout << "\ngquiz.max_size() : " << gquiz.max_size()<<endl;

	cout << "\ngquiz.at(2) : " << gquiz.at(2)<<endl;
	cout << "\ngquiz.front() : " << gquiz.front()<<endl;
	cout << "\ngquiz.back() : " << gquiz.back()<<endl;

	cout << "\ngquiz.pop_front() : ";
	gquiz.pop_front();
	showdq(gquiz);

	cout << "\ngquiz.pop_back() : ";
	gquiz.pop_back();
	showdq(gquiz);

	return 0;
}

// output:
// The deque gquiz is :    15      20      10      30

// gquiz.size() : 4

// gquiz.max_size() : 2305843009213693951

// gquiz.at(2) : 10

// gquiz.front() : 15

// gquiz.back() : 30

// gquiz.pop_front() :     20      10      30

// gquiz.pop_back() :      20      10








