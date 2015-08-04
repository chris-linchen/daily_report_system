#ifndef _DATE_H_
#define _DATE_H_
#include <iostream>
#include <string>
#include <time.h>
using namespace std;

class Date
{
public:
  Date(){
    time_t rawTime;
    struct tm* timeInfo;
    time(&rawTime);
    timeInfo = localtime(&rawTime);
    _year = timeInfo->tm_year+1900;
    _month = timeInfo-> tm_mon+1;
    _mday = timeInfo->tm_mday;
    _wday = timeInfo->tm_wday;
  }
  Date(int year, int month, int mday){
    _year = year;
    _month = month;
    _mday = mday;
    _wday = calWDay(_year,_month,_mday);
  }
  int calWDay(int y,int m, int d){
    if(m == 1 || m ==2){
      m +=12;
      y--;
    }
    return (d+1+2*m+3*(m+1)/5+y+y/4-y/100+y/400)%7;
  }
    
  int getYear(){
    return _year;
  }
  int getMonth(){
    return _month;
  }
  int getMDay(){
    return _mday;
  }
  int getWDay(){
    return _wday;
  }
  void setYear(int year){
    _year = year;
  }
  void setMonth(int month){
    _month = month;
  }
  void setMDay(int mday){
    _mday = mday;
  }
  void setWDay(int wday){
    _wday = wday;
  }
  Date nextDate();
  Date& operator++();
  Date& operator=(const Date &rhs);
  //Date operator++(int dummy);
  Date prevDate();
  Date& operator--();
  string toString();
private:
  bool isPrime();
  int _year; // the year like 2015
  int _month; // the month [1-12]
  int _mday;// the day in the month [1-31]
  int _wday;// the day in the week [1-7]
};

#endif /* _DATE_H_ */
