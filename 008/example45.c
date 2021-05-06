#include <stdio.h>

void displayBits(unsigned int value);

int main() {
	unsigned int x;
	printf("%s","enter a nonnegative int: ");
	scanf("%u",&x);
	displayBits(x);
	return 0;
}

void displayBits(unsigned int value) {
	unsigned int displayMask = 1 << 31;
	printf("%10u = ",value);
	for(unsigned int c = 1; c<=32; ++c) {
		putchar(value & displayMask? '1':'0');
		value <<= 1;
		if(c%8==0) putchar(' ');
	}
	putchar('\n');
}
