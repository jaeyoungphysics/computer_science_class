#include <iostream>
#include "example72.h"
using namespace std;

class PhoneNumber;

int main() {
  PhoneNumber phone;
  cout << "Enter phone number in the form (123) 456-7890:" << endl;
  cin >> phone;
  cout << "The phone number entered was: ";
  cout << phone << endl; 
  return 0;
}

