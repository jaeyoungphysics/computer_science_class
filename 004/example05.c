#include <stdio.h>
int main(int argc, char **argv)
{
	unsigned int sum = 0;
	for(unsigned int number = 2; number <= 100; number += 2){
		sum += number;
	}
	printf("Sum is %u\n",sum);
	return 0;
}

