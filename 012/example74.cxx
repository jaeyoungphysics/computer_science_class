#include <iostream>
#include <string>
#include "example74.h"
using namespace std;
const array<size_t, 13> Date::days
  ={0,31,28,31,30,31,30,31,31,30,31,30,31};
Date::Date(size_t month,size_t day,size_t year){
  setDate(month,day,year);}
void Date::setDate(size_t mm,size_t dd,size_t yy) {
  if(mm>=1 && mm<=12) month = mm;
  else throw invalid_argument("Month must be 1-12.");
  if(yy>=1900 && yy<=2100) year = yy;
  else throw invalid_argument("Year must be >= 1900 and <= 2100."); 	
  if(dd>=1 && dd<=days[month]) day = dd;
  else throw invalid_argument("Day is out of range."); }
  
Date& Date::operator++() {helpIncrement(); return *this;}
Date Date::operator++(int) {
  Date temp = *this; helpIncrement(); return temp;}
Date& Date::operator+=(size_t additionalDays) {
  for(size_t i=0; i<additionalDays; ++i) helpIncrement();
  return *this;}
  
bool Date::leapYear(size_t testYear) {
  if(testYear%400==0 || (testYear%100!=0 && testYear%4==0)) return true;
  else return false;}
bool Date::endOfMonth(size_t testDay) const {
  if(month==2 && leapYear(year)) return testDay==29;
  else return testDay == days[month];}

void Date::helpIncrement() {
  if(!endOfMonth(day)) ++day;
  else if(month<12) {++month; day=1;} else {++year; month=1; day=1;}}
  
ostream& operator<<(ostream& output, const Date& d) {
  static string monthName[13]={"","Jan","Feb","Mar","Apr","May",
	"Jun","Jul","Aug","Sep","Oct","Nov","Dec"};
  output << monthName[d.month] << ' ' << d.day << ", " << d.year;
  return output;}

