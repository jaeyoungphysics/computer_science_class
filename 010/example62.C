#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;
void outputVector(const vector<int> &);
void inputVector(vector<int> &);
int main() {
  vector<int> int1(7),int2(10); // standard construction
  cout << "int1 size:" << int1.size() << " After initialization:\n";
  outputVector(int1);
  cout << "\nEnter 7 integers:\n";
  inputVector(int1);
  cout << "After input\n"; outputVector(int1);

  vector<int> int3(int1); // construction with initialization 
  int2 = int1; // What would be the assignment operator for vector?
  cout << "New vector int2:\n";
  outputVector(int2); 
  if(int3==int2) cout << "int3 and int2 are equal" <<endl;

  int1[5] = 1000; // changing element
  cout << " int1[5] after assignment is " << int1[5];
  try { 
	cout << "\nAttemt to access int1[1] " << int1.at(1) << endl;
	cout << "\nAttemt to access int1[7] " << int1.at(7) << endl;} 
  catch (out_of_range &ex) {
	cout << "An exception occurred:\n" << ex.what();}
  cout << endl;
  return 0;
}
void outputVector(const vector<int> &array) {
  for(unsigned int i=0; i<array.size(); ++i) {
    cout << setw(12) << array[i]; if((i+1)%5==0) cout << endl;
  } cout << endl;
}
void inputVector(vector<int> &array) {
  for(unsigned int i=0; i<array.size(); ++i) cin >> array[i];}


