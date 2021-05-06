#include <stdio.h>
int main(int argc, char **argv) {
	int n[5];
	
	for(unsigned int i=0; i<5; i++) n[i]=0;
	
	printf("%s%13s\n","Element","Value");
	for(unsigned int i=0; i<5; i++) printf("%7u%13d\n",i,n[i]);
	
	return 0;
}

