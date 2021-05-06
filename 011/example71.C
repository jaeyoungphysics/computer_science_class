#include <iostream>
#include "example71.h"
using namespace std;

int main() {
	GradeBook gradeBook1("Physics");
	GradeBook gradeBook2("Introduction to numerical calculation");
	
	cout<<"gradeBook1 created for course:"<< gradeBook1.getCourseName();
	cout<<"\nand gradeBook2 for course:"<<gradeBook2.getCourseName();
	cout<<endl;
	return 0;
}

