#include "Report.h"
#include "Date.h"
#include <string>
#include <iostream>
#include <fstream>
using namespace std;

Report::Report(){
  _date = Date();
  // _plan = "* [" + _date.toString() + "] Today's Plan:\n";
  // _summary = "* [" + _date.toString() + "] Today's Summary:\n";
}

Report::Report(Date date){
  _date = date;
  // _plan = "* [" + _date.toString() + "] Today's Plan:\n";
  // _summary = "* [" + _date.toString() + "] Today's Summary:\n";
}

int Report::saveToFile(string fileName){
	fstream fs;
	fs.open(fileName.c_str(), ios::out | ios::app);
	fs << "* " <<  _date.toString() << endl;
	fs << "** " << _plan << endl;
	fs << "** " << _summary << endl;
	fs.close();
}
	
// int Report::saveToBinaryFile(string fileName){
//   fstream fs;
//   fs.opem(fileName.c_str(),ios::out | ios::binary);
//   fs.write(cast_interpret<char*>*this, sizeof(*this));
// }
	 
