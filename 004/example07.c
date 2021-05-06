#include <stdio.h>
int main(int argc, char **argv)
{
	unsigned int x;
	for(x=1; x<=10; ++x) {
		if(x==5) {
			break;
		}
		printf("%u ",x);
	}
	printf("\nBroke out of loop at x = %u\n",x);
	return 0;
}

