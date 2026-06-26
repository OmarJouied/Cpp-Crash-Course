#include <iostream>
using namespace std;

struct stPerson
{
    string Name;
    short Age;
};

int main()
{
    stPerson Person1, Person2;

    Person1.Name = "Ahmed";
    Person1.Age = 25;

    Person2.Name = "Omar";
    Person2.Age = 26;

    cout << "Person 1:\nName: " << Person1.Name << "\tAge: " << Person1.Age << endl << endl;
    cout << "Person 2:\nName: " << Person2.Name << "\tAge: " << Person2.Age << endl << endl;

    return 0;
}
