#include <stdio.h>
int main() {

  int a, b, c;
  printf ("Input two integers a and b:\n");
  scanf("%d %d", &a, &b);
  c = (a>b) ? (a-b) : -(a - b);
  printf("Difference between %d and %d: %d\n", a,b,c);

  return 0;
}

