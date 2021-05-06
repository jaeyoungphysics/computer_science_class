#include <stdio.h>
int main(int argc, char **argv)
{
	unsigned int aCount = 0;
	unsigned int bCount = 0;
	
	puts("Enter the letter grades.");
	puts("Enter the character \'x\' to end input.");
	int grade;
	
	while((grade=getchar()) != 'x') {
		switch (grade) {
			case 'A' :
			case 'a' :
				++aCount;
				break;				
			case 'B' :
			case 'b' :
				++bCount;
				break;
			case '\n' :	 // new lines
			case '\t' :	 // tap
			case ' '  :  // space
				break;
			default:
				printf("%s\n","Uncounted grade.");
				break;
		}
	}
	puts("\nGrade distribution:\n");
	printf("A: %u  B: %u\n",aCount,bCount);
	return 0;
}

