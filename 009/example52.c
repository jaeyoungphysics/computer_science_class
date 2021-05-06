#include <stdio.h>
int main() {
  int x=3, y=2;
 

  int relation = (x>y);
  printf("%d > %d ==> %d\n", x, y, relation);

  relation = (x==y);
  printf("%d == %d ==> %d\n", x, y, relation);

  relation = (x>=y);
  printf("%d >= %d ==> %d\n", x, y, relation);

  return 0;
}

