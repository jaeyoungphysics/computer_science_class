#include <stdio.h>
int main() {
  FILE *fPtr = 0;
  if((fPtr=fopen("test.dat","w"))==NULL) {
	puts("File can't be open!");	
  } else {
	char name[20];
	char grade;
	printf("Input name and grade.\n");	
	while(scanf("%s %c",name,&grade)==2) {
	  printf("Input name: %s Input grade %c\n",name,grade);
	  fprintf(fPtr,"%s %c\n",name,grade);
	}
	fclose(fPtr);
  }
  return 0;
}



