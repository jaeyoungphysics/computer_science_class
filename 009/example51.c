#include <stdio.h>
int main() {
  int x, y, z;

  y = 5;
  z = 10;
  x = ++y + z--;
  printf("x=%d, y=%d, z=%d\n", x, y, z);
  x += y;
  printf("x=%d, y=%d\n", x, y);
  x %= 3;
  printf("x=%d\n", x);

  float a =1.0, b=2.0; 
  printf("a:%f b:%f, a/b*a/b=%f\n",a,b,a/b*a/b);
  return 0;
}

