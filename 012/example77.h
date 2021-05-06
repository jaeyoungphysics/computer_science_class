#ifndef EXAMPLE76
#define EXAMPLE76

#include <string>
#include "example73.h"
class SalaryEmployee : public Employee { 
public:
  SalaryEmployee(const std::string &, const std::string &, 
    const std::string &, double = 0.0, double = 0.0, double = 0.0);
  void setBaseSalary(double);
  double getBaseSalary() const;
  double earnings() const;
  void print() const;
  
private:
  double baseSalary;
};  
#endif


