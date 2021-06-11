#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv) {

	printf("  argc = %d\n",argc);
    for(int i=0; i<argc; i++) {
		printf("  %d %s \n",i,argv[i]);
	}

	int i1 = atoi(argv[1]);
	int i2 = atoi(argv[2]);
	printf("  Addition: %d + %d = %d\n",i1,i2,i1+i2);
	
	return 0;
}

