#include <stdio.h>
int main(int argc, char **argv) {
	printf("%s","Enter size of a 1D array : ");
	int arraySize;
	scanf("%d",&arraySize);
	int array[arraySize];
	
	printf("%s","number of rows and columns in a 2D array : ");
	int row,col;
	scanf("%d %d",&row,&col);
	int array2D[row][col];
	
	printf("\nSize of a 1D array is %d bytes.\n",sizeof(array));
	printf("\nSize of a 2D array is %d bytes.\n",sizeof(array2D));
	
	return 0;
}



