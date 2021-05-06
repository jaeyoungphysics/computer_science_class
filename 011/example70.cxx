#include <iostream>
#include "example70.h"
using namespace std;

GradeBook::GradeBook(string name) : courseName(name) {}
void GradeBook::setCourseName(string name) {courseName = name;}
string GradeBook::getCourseName() const {return courseName;}
void GradeBook::displayMessage() const {
  cout << "Welcome to the Grade Book for "<<getCourseName()<< "\n";
}  




