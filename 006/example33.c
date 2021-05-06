#include <stdio.h>

void tryToModifyArray(const int b[]); // Does this compile?

int main(int argc, char **argv) {
	
	int b[3] = {0,1,2};
	tryToModifyArray(b);
	for(int i=0; i<3; i++) printf("b[%d] = %d\n",i,b[i]); 
	return 0;
}

void tryToModifyArray(const int b[]) {
  b[0] /= 2;
  b[1] /= 2;
  b[2] /= 2;
}


