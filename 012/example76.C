#include <iostream>
#include <iomanip>
#include "example76.h"
using namespace std;

int main() {
  SalaryEmployee employee("Bob","Lewis","333-33-3333",5000,0.4,300);
  cout << fixed << setprecision(2);
  cout << "Employee info\n  First name: " << employee.getFirstName(); 
  cout << "\n  Last name: " << employee.getLastName() << "\n  SSN: "
    << employee.getSocialSecurityNumber() << "\n  Sale: " 
    << employee.getGrossSales() << "\n  Commission rate: " 
    << employee.getCommissionRate() << "\n  Salary is "
    << employee.getBaseSalary() << endl;
  employee.setBaseSalary(1000);
  cout << "\nUpdated info " << endl;
  employee.print();
  cout << "\nEmployee's earnings: $" << employee.earnings() << endl;
  return 0;
}

