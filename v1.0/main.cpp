#include <iostream>
#include "Date.h"

using namespace std;

int main(int argc, char *argv[])
{
  Date date(2015,6,23);
  cout << date.toString() << endl;
  return 0;
}
