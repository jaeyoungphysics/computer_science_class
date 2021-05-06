#include <iostream>
#include <string>
using namespace std;

class GradeBook {
public:
  explicit GradeBook(string name) : courseName(name) {}
  // input argument must be string, no implicit conversion!
  void setCourseName(string name) {courseName = name;}
  string getCourseName() const {return courseName;}
  void displayMessage() const {
	cout << "Welcome to the Grade Book for "<<getCourseName()<< "!\n";
  }
private:
  string courseName;
};  

int main() {
	GradeBook gradeBook1("physics");
	GradeBook gradeBook2("chemistry");
	
	cout<<"gradeBook1 created for course:"<< gradeBook1.getCourseName();
	cout<<"\nand gradeBook2 for course:"<<gradeBook2.getCourseName();
	cout<<endl;
	return 0;
}

