#include <stdio.h>

void fun1(char);
long fun2(int);
double fun3(int,float);

int A;

int main(int argc, char **argv) {
  A = 64;
  fun1(A);
  long b = fun2(A); // forced type conversion
  printf("\n%.f\n",fun3(A,b));
  printf("\n%.2f\n",fun3(A,b));
  printf("\n%10.4f\n",fun3(A,b));
  printf("\n%5.4f\n",fun3(A,b)); // It still works!
  return 0;
}

void fun1(char a) {
  putchar(a); printf(" %d: %c ",A,A);
} // no return

long fun2(int a) {
  long b = (long)a; // b,scope?
  return b;
} // explicit type conversion

double fun3(int a, float b) {
  return (double)(((float)a)*b);
} // how is the return value calculated?
