#include <stdio.h>
int main() {
  unsigned short u, v, bitlogical;

  u = 0xa9a9;
  v = 0x7070;
  bitlogical = u&v;
  printf("%x & %x ==> %x\n", u, v, bitlogical);

  bitlogical = u<<3;
  printf("%x << 3 ==> %x\n", u, bitlogical);

  return 0;
}

