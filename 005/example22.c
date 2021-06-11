#include <stdio.h>
int fun1();
int main(int argc, char **argv) {
	int sum = 0;
	for(int i=0; i<10; i++) {
		sum += fun1();
    }
    printf("  Sum is %d\n",sum);
	return 0;
}
int fun1() {
  static int cnt = 1;
  printf("  cnt = %d\n",cnt);
  return cnt--;
}

