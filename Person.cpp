#include "Person.h"
#include "Menu.h"


//Person

/**
*
*
*/
Person::Person(const string &name, const Date &birthDate, const unsigned int &id) : name(name), birthDate(birthDate),
                                                                                    id(id)
{}


Person::Person(string &name, Date &birthDate, unsigned int &id) : name(name), birthDate(birthDate), id(id)
{}

string Person::getName() const
{
    return name;
}

unsigned int Person::getId() const
{
    return id;
}

unsigned int Person::getAge() const
{
    Date today;
    return birthDate.getYear() - today.getYear();
}

bool Person::operator==(const Person &pRHS) const
{
    return id == pRHS.id;
}

ostream &operator<<(ostream &out, const Person &p)
{
    out <<p.getName() <<"  " <<p.getId();
    return out;
}




//Student

Student::Student(const string &name, const Date &birthDate, const unsigned int &id, const unsigned int &currentYear,
                 const unsigned int &yearClass) : Person(name, birthDate, id)
{
    this->currentYear = currentYear;
    this->yearClass = yearClass;
}

Student::Student(string &name, Date &birthDate, unsigned int &id) : Person(name, birthDate, id)
{}


Student::~Student()
{
}

unsigned int Student::getCurentYear() const
{
    return currentYear;
}


/*ostream &Student::operator<<(ostream &out)
{
    out << left << setw(MainMenu::maxNameLength) << name <<" " << birthDate.getDate() << "   " << id << "          "
        << currentYear <<endl;

    return out;*/

}

void Student::print() const
{
    cout << left << setw(MainMenu::maxNameLength) << name <<"  " << birthDate.getDate() << "            " << id << "          "
         << currentYear <<"\n";
}

void Student::addProject(const Project *project)
{
    for (unsigned int i = 0; i < projects.size(); i++)
    {
        if (*project == (*projects.at(i)))
        {
            cerr << "That project already exists in " << this->name << "'s portfolio\n";
            return;
        }
        projects.push_back(project);

    }
}



//Professor

    void Professor::print() const
    {
        cout << name << birthDate.getDate() << id;
    }

    ostream &Professor::operator<<(ostream &out)
    {
        out << name << birthDate.getDate() << id;

        return out;
    }
