#include <iostream>
#include <stdexcept>
#include "example77.h"
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
  return baseSalary + (getCommissionRate()*getGrossSales());}

void SalaryEmployee::print() const {
  cout << "Salary commission employee: " << getFirstName() << ' '
    << getLastName() << "\nSSN: " << getSocialSecurityNumber() 
    << "\ngross sales: " << getGrossSales() << "\nCommission rate: " 
    <<  getCommissionRate() << "\nBase Salary" << baseSalary;}

