#include <iostream>
#include <stdexcept>
#include "example73.h"
using namespace std;

Employee::Employee(const string &first, const string &last, 
  const string &ssn, double sales, double rate) {
  firstName = first; lastName = last; socialSecurityNumber = ssn; 
  setGrossSales(sales); setCommissionRate(rate);}

void Employee::setFirstName(const string &first) {firstName = first;}
string Employee::getFirstName() const {return firstName;}
void Employee::setLastName(const std::string &last) {lastName = last;}
string Employee::getLastName() const {return lastName;}
void Employee::setSocialSecurityNumber(const std::string &ssn) {
  socialSecurityNumber = ssn;}
string Employee::getSocialSecurityNumber() const {
  return socialSecurityNumber;}
void Employee::setGrossSales(double sales) {
  if(sales>=0.0) grossSales = sales; 
  else throw invalid_argument("Gross sales must be >= 0.0");}
double Employee::getGrossSales() const {return grossSales;}
void Employee::setCommissionRate(double rate) {
  if(rate>0.0 && rate<1.0) commissionRate=rate;
  else throw invalid_argument("Commission rate between 0.0-1.0");}
double Employee::getCommissionRate() const {return commissionRate;}
double Employee::earning() const {return commissionRate*grossSales;}
void Employee::print() const {
  cout << "employee: " << firstName << ' ' << lastName << "\nSSN: "
    << socialSecurityNumber << "\nSales: " << grossSales 
    << "\nCommission rate: " << commissionRate << endl;}


