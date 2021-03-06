#ifndef __PERSON__
#define __PERSON__

#include <string>
#include <iomanip>
#include <vector>
#include "Date.h"

using namespace std;

class Project;//Forward Declaration



class Person
{
public:
    Person(const string &name, const Date &birthday, const unsigned int &id);

    Person(string &name, Date &birthday, unsigned int &id);
	string getName() const;

    unsigned int getId() const;
	unsigned int getAge() const;

	virtual unsigned int getCurrentYear() const
	{};

	string getDateBirth() const;

	virtual unsigned int getClass() const
	{};

	virtual void print() const = 0;

    //Operators
    bool operator==(const Person &pRHS) const;

	bool operator<(const Person &pRHS) const;


protected:
	const string name;
	const Date birthDate;
    const unsigned int id;
};


class Student : public Person
{
public:
	Student(const string &name, const Date &birthDate,
		const unsigned int &id, const unsigned int &currentYear, const unsigned int &yearClass);
	Student(string &name, Date &birthDate, unsigned int &id);

	~Student();

	unsigned int getCurrentYear() const;

	unsigned int getClass() const;
	virtual void print() const;
    void addProject(const Project* project);


	bool operator<(const Student &sRHS) const;//DELETE
private:
	unsigned int currentYear;
    unsigned int yearClass; //class
	vector<Student *> currentGroup; //Him/herself plus colleagues
    vector<Project const *> projects;

};


class Professor : public Person
{
public:
	Professor();
	virtual void print() const;
	ostream& operator<<(ostream& out);
};

ostream& operator<<(ostream& out,const Person &p);

Person *BinarySearch(const vector<Person *> &vec, unsigned int x);

#endif

