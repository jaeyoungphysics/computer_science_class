#include <stdio.h>

int add(int a, int b) {
    int c;
    
    printf("  add called!\n");
    c = a + b;
    return c;
}

int main() {
	int a = 1;
	int b = 2;

	int c = add(a,b);
	printf("  c = %d\n",c);

	add(a,b);

	return 0;
}

