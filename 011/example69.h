#include <iostream>
#include <string>

class GradeBook {
public:
  explicit GradeBook(std::string name) : courseName(name) {}
  // input argument must be string, no implicit conversion!
  void setCourseName(std::string name) {courseName = name;}
  std::string getCourseName() const {return courseName;}
  void displayMessage() const {
	std::cout << "Welcome to the Grade Book for "
		<<getCourseName()<< "!\n";
  }
private:
  std::string courseName;
};  



