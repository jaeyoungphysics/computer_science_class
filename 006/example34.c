#include <stdio.h>
int main(int argc, char **argv) {

	int a[2][3] = {{1,2,3},{4,5,6}};
	for(int i=0; i<2; i++) 
		for(int j=0; j<3; j++) 
			printf("a[%d][%d] = %d\n",i,j,a[i][j]);
	puts("");

	int b[2][3] = {{1,2},{4,5,6}};
	for(int i=0; i<2; i++) 
		for(int j=0; j<3; j++) 
			printf("b[%d][%d] = %d\n",i,j,b[i][j]);
	puts("");
	
	int c[2][3] = {1,2,4,5,6}; // compiler warns, but compile.
	for(int i=0; i<2; i++) 
		for(int j=0; j<3; j++) 
			printf("c[%d][%d] = %d\n",i,j,c[i][j]);
	puts("");
			
	return 0;
}

