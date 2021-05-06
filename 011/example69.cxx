#include <iostream>
#include "example69.h"
using namespace std;

int main() {
	GradeBook gradeBook1("physics");
	GradeBook gradeBook2("chemistry");
	
	cout<<"gradeBook1 created for course:"<< gradeBook1.getCourseName();
	cout<<"\nand gradeBook2 for course:"<<gradeBook2.getCourseName();
	cout<<endl;
	return 0;
}

