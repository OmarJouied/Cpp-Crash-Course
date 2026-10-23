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

void ReadPersons(stPerson Persons[100], int& Length)
{
    cout << "How many Persons you need? (1 - 100)\n";
    cin >> Length;

    for (int i = 0; i < Length; i++)
    {
        cout << "Person " << i + 1 << endl;
        ReadPerson(Persons[i]);
    }
}

void PrintPersons(stPerson Persons[100],int Length)
{
    for (int i = 0; i < Length; i++)
    {
        cout << "Person " << i + 1 << endl;
        PrintPerson(Persons[i]);
    }
}

int main()
{
    stPerson Persons[100];
    int Length = 0;

    ReadPersons(Persons, Length);
    PrintPersons(Persons, Length);

    return 0;
}
