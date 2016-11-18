#include "Person.h"



//Person

/**
*
*
*/
Person::Person(const string &name, const Date &birthDate): name(name), birthDate(birthDate)
{ }


/**
 * hgygyugyuggyyugyug
 * @param name person's name
 * @param birthDate 78yh
 * @return jinui
 */
Person::Person(string &name, Date &birthDate) : name(name), birthDate(birthDate)
{ }

string Person::getName() const
{
	return name;
}

unsigned int Person::getAge() const
{
	Date today;
	return birthDate.getYear() - today.getYear();
}




//Student

Student::Student(const string &name, const Date &birthDate, const unsigned int &id, const unsigned int &currentYear, const unsigned int &yearClass) : Person(name, birthDate), id(id)
{
	this->currentYear = currentYear;
	this->yearClass = yearClass;
}

Student::Student(string & name, Date & birthDate, unsigned int & id) : Person(name, birthDate), id(0)
{ }
	

Student::~Student()
{
}

unsigned int Student::getCurentYear() const
{
	return currentYear;
}

void Student::print() const
{
	cout << name << birthDate.getDate() << id;
}

ostream & Student::operator<<(ostream & out)
{
	out << name << birthDate.getDate() << id;
		
	return out;

}



//Professor

void Professor::print() const
{
	cout << name << birthDate.getDate() << id;
}

ostream & Professor::operator<<(ostream & out)
{
	out << name << birthDate.getDate() << id;

	return out;
}
