#include <iostream>
#include <sstream>
#include "Date.h"
#include <stdio.h>
using namespace std;
string Date::toString(){
  ostringstream oss;
  oss << _year << "/" << _month << "/" << _mday;
  return oss.str();
}

Date Date::nextDate(){
  if(_mday < 28 || (isPrime()&& _mday < 29)||(_month !=2 && _mday < 30) || (_month != 2  && _month !=4 && _month !=6 && _month !=9 && _month !=11 && _mday <31) )
    return Date(_year,_month,_mday+1);
  else if((_month ==2 && isPrime() && _mday==29)||(_month ==2 && !isPrime() && _mday==28)||((_mday==30)&&(_month == 2||_month==4||_month==6||_month==9||_month==11)) || ((_mday==31)&&(_month==1||_month==3||_month==5||_month==7||_month==8||_month==10)))
    return Date(_year,_month+1,1);
  else if(_month ==12 && _mday==31)
    return Date(_year+1,1,1);
}
Date Date::prevDate(){
  if (_mday!=1)
      return Date(_year,_month,_mday-1);
  else
    switch(_month)
      {
      case 1:
	return Date(_year-1,12,31);
      case 2:
      case 4:
      case 6:
      case 8:
      case 9:
      case 11:
	return Date(_year,_month-1,31);
      case 3:
	if(isPrime())
	  return Date(_year,2,29);
	else
	  return Date(_year,2,28);
      case 5:
      case 7:
      case 10:
      case 12:
	return Date(_year,_month-1,30);
      default:
	cout << "the Date is not existed" << endl;
      }
}


Date& Date::operator++(){
  *this = this->nextDate();
  return *this;
}
Date& Date::operator--(){
  *this = this->prevDate();
  return *this;
}
Date& Date::operator=(const Date &rhs) {
  // Check for self-assignment!
  if (this == &rhs)
    return *this;
  _year  = rhs._year;
  _month = rhs._month;
  _mday  = rhs._mday;
  return *this;
}
bool Date::isPrime(){
  if (((_year%4==0)&&(_year%100!=0))||(_year%400==0))
    return true;
  else
    return false;
}

