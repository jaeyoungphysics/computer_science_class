#include <stdio.h>
#include <ctype.h>  // Definition for toupper

void convertToUppercase(char *sPtr);

int main(void) {
	char string[] = "cHaRaCters and $32.98";
	printf("The string before conversion is: %s",string);
	convertToUppercase(string);
	printf("\nThe string after conversion is: %s\n",string);
	return 0;
}

void convertToUppercase(char *sPtr) {
	while(*sPtr != '\0') {
		*sPtr = toupper(*sPtr);
		++sPtr;
	}
}



