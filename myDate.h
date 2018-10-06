//Shashi Kumar Kadari Mallikarjuna
//CECS 282
//Prog-2: myDate Object
//Due- Oct 4,2018
#ifndef MYDATE_H
#define MYDATE_H
#include <string>
using namespace std;
class myDate {
private:
	int month;
	int day;
	int year;
public:
	myDate();
	myDate(int M, int D, int Y);
	void display();
	void increaseDate(int N);
	void decreaseDate(int N);
	int daysBetween(myDate D);
	int getMonth();
	int getDay();
	int getYear();
	int dayOfYear();
	string dayName();
};
#endif