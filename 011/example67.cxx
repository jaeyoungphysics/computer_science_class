#include <iostream>
using namespace std;
class GradeBook {
public:
  void setCourseName(string name) {
	courseName = name;
  }
  string getCourseName() const {return courseName;}
  void displayMessage() const {
	cout << "Welcome to the Grade Book for "<<getCourseName()<< "!\n";
  }
private:
  string courseName;
};  

int main() {
	string nameOfCourse;
	GradeBook myGradeBook;
	
	cout << "Initial course name is: " << myGradeBook.getCourseName();
	cout << "\nPlease enter the course name: " << endl;
	getline(cin,nameOfCourse);
	myGradeBook.setCourseName(nameOfCourse);
	cout << endl;
	myGradeBook.displayMessage();
	return 0;
}

