#include <stdio.h>
#include <string.h>
int main() {
	FILE *fPtr = 0;
    if((fPtr=fopen("test.dat","r"))==NULL) {
	  puts("File can't be open!");	
    } else {
	  char name_and_grade[100];
	  char name[20];
	  char grade;
	  printf("We've read the following string...\n");	
	  while(fgets(name_and_grade,100,fPtr)!=NULL) {
	    printf("%s",name_and_grade);
	    sscanf(name_and_grade,"%s %c",name,&grade);
	    printf("name: %s grade: %c\n",name,grade);
	  }
	  fclose(fPtr);
    }
	return 0;
}

