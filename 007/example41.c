#include <stdio.h>

void function1(int);
void function2(int);
void function3(int);

int main(void) {
	void (*f[3])(int) = {function1,function2,function3};

	printf("%s","Enter a number among 1, 2, and 3: ");
	size_t choice;
	scanf("%u",&choice);
	while(choice >= 1 && choice < 4) {
		(*f[choice-1])(choice);
		printf("%s","Enter a number among 1, 2, and 3: ");
		scanf("%u",&choice);
	} 
	puts("Program execution completed.");
	return 0;
}

void function1(int a) { 
	printf("You entered %d so function1 was called\n\n",a);
}
void function2(int a) { 
	printf("You entered %d so function2 was called\n\n",a);
}
void function3(int a) { 
	printf("You entered %d so function3 was called\n\n",a);
}


