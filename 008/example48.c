#include <stdio.h>
#include <stdlib.h> // includes definition for malloc
#include <string.h>	// includes definition for strcpy
struct student {
	char name[20];
    char homework[3];
	int  final;
	char grade;
};
typedef struct student Student;
void print_grade(Student *);
int main() {
	struct student a = {"Gildong1, Hong","AAB",90,'A'};
	Student b = {"Gildong2, Hong","ABB",85,'B'};
	int Nstudent = 20;
	Student *c = malloc(Nstudent*sizeof(Student));
	strcpy(c[0].name,a.name); strcpy(c[0].homework,a.homework);
	c[0].final = a.final; c[0].grade = a.grade;
	strcpy((c+1)->name,b.name); strcpy((c+1)->homework,b.homework);
	(c+1)->final = b.final; (c+1)->grade = b.grade;
	print_grade(&a); print_grade(&b); print_grade(c); print_grade(c+1);
	free(c);
	return 0;
}
void print_grade(Student *c) {
  printf("name: %s\n  homework: %c%c%c\n  exam %d\n  grade %c\n",
	c->name,c->homework[0],c->homework[1],c->homework[2],
	c->final,c->grade);
}


