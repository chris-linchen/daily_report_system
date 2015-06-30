#include <iostream>
#include "Date.h"
using namespace std;
string Date::toString(){
  string result;
  result += _year;
  result += "/";
  result += _month;
  result += "/";
  result += _mday;
    return result;
  }
