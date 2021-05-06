#include <stdio.h>
#include "exercise22.h"
 
int main () {

  int a = 100, b = 200;
  int val;
 
  val = max(a, b);
  printf("Max value is : %d\n",val);
  val = min(a, b);
  printf("Min value is : %d\n",val);
  
  return 0;
}

