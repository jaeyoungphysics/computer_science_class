#ifndef EXAMPLE74
#define EXAMPLE74
#include <array>
#include <iostream>
class Date { 
  friend std::ostream& operator<<(std::ostream&, const Date&);
public:
  Date(size_t m=1, size_t d=1, size_t y=1900);
  void setDate(size_t,size_t,size_t);
  Date& operator++();
  Date operator++(int);
  Date& operator+=(size_t);
  static bool leapYear(size_t);
  bool endOfMonth(size_t) const;
private:
  size_t month;
  size_t day;
  size_t year;
  static const std::array<size_t, 13> days;
  void helpIncrement();
};  
#endif


