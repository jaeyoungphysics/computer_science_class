#include <stdio.h>
#include <stdlib.h> // includes definition for malloc

int main(int argc, char **argv) {
	char c;
	short s;
	int i;
	long l;
	long long ll;
	float f;
	double d;
	long double ld;
	int array[20];
	int *ptr = array;
	int cnt = 100;
	double *tau;
    tau = (double *)malloc(cnt*sizeof(double));
	for(int i=0; i<cnt; i++) tau[i] = 0.;
	
	printf("sizeof c=%u\tsizeof(char)=%u\n",sizeof c,sizeof(char));
	printf("sizeof s=%u\tsizeof(short)=%u\n",sizeof s,sizeof(short));
	printf("sizeof i=%u\tsizeof(int)=%u\n",sizeof i,sizeof(int));
	printf("sizeof l=%u\tsizeof(long)=%u\n",sizeof l,sizeof(long));
	printf("sizeof ll=%u\t",sizeof ll);
	printf("sizeof(long long)=%u\n",sizeof(long long));
	printf("sizeof f=%u\tsizeof(float)=%u\n",sizeof f,sizeof(float));
	printf("sizeof d=%u\tsizeof(double)=%u\n",sizeof d,sizeof(double));
	printf("sizeof ld=%u\t",sizeof ld);
	printf("sizeof(long double)=%u\n",sizeof(long double));
	printf("sizeof array=%u\n",sizeof array);
	printf("sizeof ptr=%u\n",sizeof ptr);
	printf("sizeof tau=%d\n",sizeof tau);
	
	return 0;
}

