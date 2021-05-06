#include <stdio.h>
void displayBits(unsigned short value);
union data {
	struct {
		unsigned short a:4;
		unsigned short b:4;
		unsigned short c:8;
	} unpacked;
	unsigned short packed;
};
int main() {
	union data u = {{0x1,0xA,0x2F}};
	printf("a = %d : b = %d : c = %d\n",
		u.unpacked.a,u.unpacked.b,u.unpacked.c);
	printf("packed = %d\n",u.packed);
	displayBits(u.packed);
	return 0;
}
void displayBits(unsigned short value) {
	unsigned int displayMask = 1 << 15;
	printf("%10u = ",value);
	for(unsigned int c = 1; c<=16; ++c) {
		putchar(value & displayMask? '1':'0');
		value <<= 1;
		if(c%8==0) putchar(' ');
	}
	putchar('\n');
}
