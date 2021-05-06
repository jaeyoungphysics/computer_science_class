#include <stdio.h>

#define SIZE 20

int main(int argc, char **argv) {
	char string1[] = {"first"};
	char string2[] = {'f','i','r','s','t','\0'};
	printf("%19s%19s\n",string1,string2);
	
    for(int i=0; i<SIZE && string1[i]!='\0'; i++) 
		printf("%c ",string1[i]);
    puts(""); // We need to terminate the string to print it.
    
	return 0;
}

