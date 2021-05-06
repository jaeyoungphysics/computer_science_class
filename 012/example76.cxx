#include <iostream>
#include <stdexcept>
#include "example76.h"
using namespace std;

SalaryEmployee::SalaryEmployee(const string& first, const string& last, 
    const string& ssn, double sales, double rate, double salary) 
    :Employee(first,last,ssn,sales,rate) {
  setBaseSalary(salary);
}

void SalaryEmployee::setBaseSalary(double salary) {
  if(salary>0.0) baseSalary = salary; 
  else throw invalid_argument("Salary must be >= 0.0");
}

double SalaryEmployee::getBaseSalary() const {return baseSalary;}
double SalaryEmployee::earnings() const {
  return baseSalary + (commissionRate*grossSales);}

void SalaryEmployee::print() const {
  cout << "Salary commission employee: " << firstName <<' '<< lastName
    << "\nSSN: " << socialSecurityNumber << "\ngross sales: " 
    << grossSales << "\nCommission rate: " << commissionRate 
    << "\nBase Salary" << baseSalary;}

