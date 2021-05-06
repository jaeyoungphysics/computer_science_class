#include <stdio.h>
int main(int argc, char **argv) {
	int Value = 0;
	int Threshold = 5;

	printf("Input value:\n");
	scanf("%d",&Value);

	if(Value>Threshold) printf("    Exceeding threshold!\n");
	else 				printf("    Not exceeding threshold!\n");

	if(Value>Threshold) printf("    Exceeding threshold!\n");
	else if(Value<Threshold) printf("    Under threshold!\n");
	else printf("    Exact threshold\n");
	
	if(Value>Threshold) printf("    Exceeding threshold!\n");
	else if(Value<Threshold) {
		int Difference = Threshold-Value;
		printf("    Under threshold by %d!\n",Difference);
	}
	else printf("    Exact threshold\n");
	
	if(Value>Threshold) printf("    Exceeding threshold!\n");
	else if(Value<Threshold) {
		float Difference = (float)(Threshold-Value);
		printf("    Under threshold by %f!\n",Difference);
	}
	else printf("    Exact threshold\n");

	return 0;
}

