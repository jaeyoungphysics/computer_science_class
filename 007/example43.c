#include <stdio.h>
#include <stdlib.h> // We want to use malloc and free
int main() {
	int n,*ptr,sum = 0;
	printf("Input number of elements: ");
	scanf("%d",&n);
	ptr = (int *)malloc(n*sizeof(int));
	if(ptr==NULL) {
		printf("Error! memory not allocated.");
	}
	printf("Enter elements: ");
	for(int i=0; i<n; ++i) {
		scanf("%d",ptr+i);
		sum += *(ptr+i);
	}
	printf("Sum = %d\n",sum);
	free(ptr);
	return 0;
}

