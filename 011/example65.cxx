#include <iostream>
using namespace std;
class GradeBook {
public:
  void displayMessage() const { //const means no modification of object
	cout << "Welcome to the Grade Book!" << endl;
  }
};  

int main() {
	GradeBook myGradeBook;
	myGradeBook.displayMessage();
	return 0;
}

