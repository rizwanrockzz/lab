#include <iostream>
using namespace std;

class myclass {
   int a, b; // private members of this class
   public: //method declarations only
     //friend is the keyword used to create a friend function. We should use the keyword before //method signature
     friend int sum(myclass x);.
   //this sum function can access the private numbers of the class anywhere
   void set_ab(int i, int j);
 };
 void myclass::set_ab(int i, int j) {
   a = i;
   b = j;
 }
 // Note: sum() is not a member function of any class.
 int sum(myclass x) //sum is a friend function to myclass
 {
   /* Because sum() is a friend of myclass, it can
   directly access a and b. */
   return x.a + x.b;
 }
 int main() {
   myclass n;
   n.set_ab(3, 4);
   cout << sum(n); //passing an object to a function/friend functions (passing copy)
   return 0;
 }


#include<iostream>

#include <cstdlib>

using namespace std;

class B; //forward declaration.
class A {
  int x;
  public:
    A(int i) {
      x = i;
    }
  friend void diff(A, B); //friend function.
};

class B {
  int y;
  public:
    B(int i) {
      y = i;
    }
  friend void diff(A, B);
};

void diff(A a, B b) {
  int ans = a.x - b.y;
  cout << "Diff is : " << abs(ans) << endl;
}

int main() {
  A a(5);
  B b(10);
  diff(a, b);
  return 0;

}
