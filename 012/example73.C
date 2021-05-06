#include <iostream>
#include <iomanip>
#include "example73.h"
using namespace std;

int main() {
  Employee employee("Sue","Jones","222-22-2222",10000,.06);
  cout << fixed << setprecision(2);
  cout << "Employee info\n  First name: " << employee.getFirstName(); 
  cout << "\n  Last name: " << employee.getLastName() << "\n  SSN: "
    << employee.getSocialSecurityNumber() << "\n  Sale: " 
    << employee.getGrossSales() << "\n  Commission rate: " 
    << employee.getCommissionRate() << endl;
  employee.setGrossSales(8000); employee.setCommissionRate(0.1);
  cout << "\nUpdated info " << endl;
  employee.print();
  cout << "\nEmployee's earnings: $" << employee.earning() << endl;
  return 0;
}

