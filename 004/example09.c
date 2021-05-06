#include <stdio.h>
int main() {
	int Value = 0;
	int Threshold = 5;

	printf("Input value:\n");
	scanf("%d",&Value);
	if(Value>Threshold) printf("  Exceeding threshold!\n");
	if(Value>Threshold) {
		printf("    Threshold!\n");
	}
	if(Value>Threshold) {
		printf("  Exceeding ");
		printf("Threshold!\n");
	}
	return 0;
}

