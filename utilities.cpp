#include "utilities.h"

/**
 * Erases all the blank spaces at the beggining of the name
 * Erases double spaces ("  ") at the middle
 * and "upper cases" every 1st letter of a name
 * @param A person's name
 */
void normalizeName(string &name)
{

    if (!name.empty())
    {
        //Beginning
        while (name[0] == ' ')
            name.erase(0, 1);

        while (name[name.size() - 1] == ' ')
            name.pop_back();


        //-------------------------------------------------------------
        size_t i = 1;
        while (i < name.size() - 1) //Erases character, if there are multiple blank spaces in the middle of the name
        {
            if (name[i] == ' ' && (name[i + 1] == ' '))
                name.erase(i, 1);
            else
                i++; //Only increase the cycle counter if it doesn't erase a space
        }
        //------------------------------------------------------------------


        //Change 1st letter in every name to upper case
        name[0] = toupper(name[0]); //1st word

        for (unsigned i = 1; i < name.size(); i++)
        {
            if (name[i - 1]  == ' ')
                name[i] = toupper(name[i]);
        }
    }

}

void normalizeType(string &type)
{
    while (!((type[0] >= 65 && type[0] <= 90) || (type[0] >= 97 && type[0] <= 122)))
        type.erase(type.begin());
}

void waitInput()
{
    cout << "Press any key to continue...\n";
    cin.get();
}
