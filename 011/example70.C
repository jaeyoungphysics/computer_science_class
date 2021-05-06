#include <iostream>
#include "example70.h"
using namespace std;

// compile 
// g++ example70.C  example70.cxx  example70.h -o example70

int main() {
	GradeBook gradeBook1("physics");
	GradeBook gradeBook2("chemistry");
	
	cout<<"gradeBook1 created for course:"<< gradeBook1.getCourseName();
	cout<<"\nand gradeBook2 for course:"<<gradeBook2.getCourseName();
	cout<<endl;
	return 0;
}

