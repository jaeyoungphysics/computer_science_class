#include <stdio.h>
#include <iostream>
using namespace std;

int fun1(int x, int y) {return x/y;}
double fun1(double x, double y) {return x/y;}

int main () {
  cout << fun1(2,3) << endl;
  cout << fun1(2.0,3.0) << endl;
  printf("%14.11f\n",fun1(2.0,3.0));
  return 0;
}



