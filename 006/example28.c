#include <stdio.h>

#define SIZE 10

int main(int argc, char **argv) {
	int n[SIZE];
	
	for(unsigned int i=0; i<SIZE; i++) n[i] = 2+2*i;
	printf("%s%13s\n","Element","Value");
	for(unsigned int i=0; i<SIZE; i++) printf("%7u%13d\n",i,n[i]);
	
	return 0;
}

