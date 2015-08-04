#include <iostream>
#include "Date.h"
#include <fstream>
#include <string>
#include <vector>


using namespace std;

int main(int argc, char *argv[])
{
  Date date(2015,6,23);
  date.getMDay();
  date.getMonth();
  date.getYear();
  std::cout << endl;
  string str;
  string str2;

  date.setYear(2011);
  std::cout<<"hello " << std::endl;
  cout << date.toString() << endl;
  return 0;
}
