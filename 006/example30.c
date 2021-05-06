#include <stdio.h>
int main(int argc, char **argv) {
	char array[5];
	printf("  array = %p\n",array);
	printf("  &array[0] = %p\n",&array[0]);
	printf("  &array = %p\n",array);
	printf("  &array[1] = %p\n",&array[1]);
	printf("  &array[2] = %p\n",&array[2]);
	printf("  &array[3] = %p\n",&array[3]);
	printf("  &array[4] = %p\n",&array[4]);
	
	printf("  &array[5] = %p\n",&array[5]); // Does this work?
	return 0;
}

