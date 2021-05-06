#include <stdio.h>
int main(int argc, char **argv) {
	int n[] = {32,27,64,18,95}; // n[] -> n[5]
	
	printf("%s%13s\n","Element","Value");
	for(unsigned int i=0; i<5; i++) printf("%7u%13d\n",i,n[i]);
	
	return 0;
}

