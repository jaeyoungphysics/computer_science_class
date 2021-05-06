#include <stdio.h>

#define SIZE 5

void modifyArray(int b[], unsigned int size);
void modifyElement(int e);

int main(int argc, char **argv) {
	int a[SIZE] = {0,1,2,3,4};
	puts("Effects of passing entire array by reference:\n\n");
	puts("The values of the original array are:");
	for(unsigned int i=0; i<SIZE; i++) printf("%3d",a[i]);
	puts("");
	
	modifyArray(a,SIZE);
	puts("The values of the modified array are:");
	for(unsigned int i=0; i<SIZE; i++) printf("%3d",a[i]);
	puts("");
	
	puts("Effect of passing array element by value:\n\n");
	modifyElement(a[3]);
	printf("The value of a[3] is %d\n",a[3]); // Did value a[3] change? 
	
	return 0;
}

void modifyArray(int b[], unsigned int size) {
	for(unsigned int i=0; i<size; ++i) {
		b[i] *= 2;
	}
}

void modifyElement(int e) {
	printf("Value in modifyElement is %d\n", e *= 2);
}

