#include <stdio.h>
int main(int argc, char **argv)
{
	unsigned int counter = 1;
	do {
		printf("%u ",counter);
	} while (++counter <= 10);
	return 0;
}

