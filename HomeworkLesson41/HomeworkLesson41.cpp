#include <iostream>
using namespace std;

struct stPerson
{
    string FirstName;
    string LastName;
    short Age;
    string Phone;
};

void ReadPerson(stPerson& Person)
{
    cout << "Please enter your FirstName ?\n";
    cin >> Person.FirstName;

    cout << "Please enter your LastName ?\n";
    cin >> Person.LastName;

    cout << "Please enter your Age ?\n";
    cin >> Person.Age;

    cout << "Please enter your Phone ?\n";
    cin >> Person.Phone;
}

void PrintPerson(stPerson Person)
{
    cout << "*****************\n";
    
    cout << "FirstName: " << Person.FirstName << endl;
    cout << "LastName: " << Person.LastName << endl;
    cout << "Age: " << Person.Age << endl;
    cout << "Phone: " << Person.Phone << endl;

    cout << "*****************\n";
}

void ReadPersons(stPerson Persons[2])
{
    ReadPerson(Persons[0]);
    ReadPerson(Persons[1]);
}

void PrintPersons(stPerson Persons[2])
{
    PrintPerson(Persons[0]);
    PrintPerson(Persons[1]);
}

int main()
{
    stPerson Persons[2];

    ReadPersons(Persons);
    PrintPersons(Persons);

    return 0;
}
