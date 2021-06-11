#include <stdio.h>

void checkPrimeNumber(int a, int b) {
    int n, i, flag=0;

    printf("Enter a positive integer: ");
    scanf("%d",&n);

    for(i=2; i <= n/2; ++i) {
        if(n%i == 0) {
            flag = 1;
        }
    }
    if (flag == 1)
        printf("%d is not a prime number.", n);
    else
        printf("%d is a prime number.", n);
}

int main(int argc, char **argv) {
	printf("  argc = %d\n",argc);
	printf("  %s\n",argv[0]);
	printf("  %s\n",argv[1]);
	printf("  %s\n",argv[2]);
	if(argc==3) {
		checkPrimeNumber(a,b);
	} else {
		printf("  ./exercise15 <interger> <integer>\n");
	}
	return 0;
}

