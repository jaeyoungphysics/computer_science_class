#include <stdio.h>

int power(int, int);

int main() {
    int a, N, result;

    printf("Input a & N:\n");
    scanf("%d %d",&a,&N);
    result = power(a,N);
    printf("%d %d %d\n",a,N,result);	
	return 0;
}

int power(int a, int N) {
	if(N!=0) 
		return a*power(a,N-1);
	else
		return 1;
}
