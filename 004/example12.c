#include <stdio.h>
int main() {
	int n = 0;
	int factorial = 1;
	while(n<5) {
      factorial *= ++n;  
	}
    printf(" n = %d n! = %d\n",n,factorial);
	return 0;
}

