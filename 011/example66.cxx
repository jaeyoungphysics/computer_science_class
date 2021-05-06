#include <iostream>
using namespace std;
class GradeBook {
public:
  void displayMessage(string courseName) const {
	cout << "Welcome to the Grade Book for " << courseName << "!\n";
  }
};  

int main() {
	string nameOfCourse;
	GradeBook myGradeBook;
	
	cout << "Please enter the course name:" << endl;
	getline(cin,nameOfCourse);
	cout << endl;
	
	myGradeBook.displayMessage(nameOfCourse);
	return 0;
}

