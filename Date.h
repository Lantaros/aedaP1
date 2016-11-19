#ifndef __DATE_H__
#define __DATE_H__

#include <sstream>
#include <iostream>
#include <ctime>

using namespace std;

class Date
{
public:
	//Constructors
	Date();
	Date(string date);
	Date(unsigned int day, unsigned int month, unsigned int year);
	//Sets 'n gets
	void setYear(unsigned int year);
	void setMonth(unsigned int month);
	void setDay(unsigned int day);
	void setDate(unsigned int day, unsigned int month, unsigned int year);
	unsigned int getDay() const;
	unsigned int getMonth() const;
	unsigned int getYear() const;
	string getDate() const; // returns the date in format "dd/mm/yyyy"
	void show() const; // shows the date on the screen in format "dd/mm/yyyy"
	bool isLeap() const;


	//Operators
	ostream & operator<< (ostream &out) const;

	//Comparison operator's overloading
	bool operator< (const Date &date) const;
	bool operator> (const Date &date) const;
	bool operator== (const Date &date) const;



protected:
	void checkLeap();

private:
	unsigned int day, month, year;
	bool leap;
};


#endif
