#include <stdio.h>
int main() {

  int a, b, c;
  a=1; b=2; c=3;
  printf("  a: %d, b: %d, c: %d  %d %d\n",a,b,c,(a>b|c),(b&a+c));
  printf("  a: %d, b: %d, c: %d  %d %d\n",a,b,c,((a>b)|c),(b&(a+c)));
  a = (a>b|c) * (b&a+c);
  printf("  a: %d, b: %d, c: %d  %d %d\n",a,b,c,(a>b|c),(b&a+c));

  return 0;
}

