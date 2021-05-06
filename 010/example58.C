#include <iostream>
using namespace std;

int fun1(int &z);

int main () {
  int x = 3;
  int &y = x;
  
  cout << "x = " << x << endl << "y = " << y << endl;
  y = 7;  // x value is also modified.
  cout << "x = " << x << endl << "y = " << y << endl;
  fun1(x);
  cout << "x = " << x << endl << "y = " << y << endl;
  return 0;
}

int fun1(int &z) {
  z = 9;
  return 1;
}

