#include <iostream>
#include <string>
using namespace std;

class grade;

class stud_Info {
private:
  string name;
  string major;
  int id;
public:
  stud_Info(string,string,int);
  friend void printGrade(stud_Info,grade); };
stud_Info::stud_Info(string a,string b,int c):name(a),major(b),id(c){;}

class grade {
private:
  double gradeAverage;
public:
  grade(double);
  friend void printGrade(stud_Info,grade); };
grade::grade(double a) {gradeAverage=a;}

void printGrade(stud_Info a, grade b){
  cout << "name: " << a.name << " major: " << a.major << " id: " 
	<< a.id << " grade: " << b.gradeAverage << endl; }

int main() {
  stud_Info A("Youngil Kwon","physics",8821002);
  grade B(4.0);
  printGrade(A,B);
  return 0;
}

