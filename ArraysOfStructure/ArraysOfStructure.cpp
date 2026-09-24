#include <iostream>
using namespace std;

struct stInfo
{
    string FirstName;
    string LastName;
    short Age;
    string Phone;
};

int main()
{
    stInfo Persons[2];

    Persons[0].FirstName = "Omar";
    Persons[0].LastName = "Jouied";
    Persons[0].Age = 26;
    Persons[0].Phone = "+212701258175";

    Persons[1].FirstName = "Jaouad";
    Persons[1].LastName = "Ahmed";
    Persons[1].Age = 30;
    Persons[1].Phone = "+212701258075";

    cout << Persons[0].FirstName << endl;
    cout << Persons[1].FirstName << endl;

    return 0;
}
