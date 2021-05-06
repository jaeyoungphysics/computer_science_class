#include <stdio.h>
int main(int argc, char **argv)
{
	for(unsigned int x = 1; x<=10; ++x) {
		if(x==5) {
			continue;
		}
		printf("%u ",x);
	}
	return 0;
}

