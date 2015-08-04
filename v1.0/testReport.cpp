#include "Report.h"
#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
  Report report;
  report.setPlan("finish the daily report system");
  report.setSummary("play the mobile phone all day");

  Date date = report.getDate();
  cout << date.toString() << report.getPlan() << report.getSummary() << endl;

  report.saveToFile("daily.org");
  return 0;
}
