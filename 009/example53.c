#include <stdio.h>
int main() {

  int x=2, y=0;

  int logical = x && y;
  printf("%d && %d ==> %d\n", x, y, logical);

  logical = x || y;
  printf("%d || %d ==> %d\n", x, y, logical);
  
  logical = !x;
  printf("!%d ==> %d\n", x,logical);
  
  logical = !y;
  printf("!%d ==> %d\n", y,logical);

  return 0;
}

