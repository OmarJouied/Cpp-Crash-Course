#include <iostream>
using namespace std;

struct stDate
{
    short Day;
    short Month;
    short Year;
};

struct stStudent
{
    string Name;
    string Id;
    stDate BirthDate;
};

int main()
{
    stStudent Student;

    cout << "Please enter your Name?\n";
    cin >> Student.Name;

    cout << "Please enter your Id?\n";
    cin >> Student.Id;

    cout << "Please enter the year in your birthDate?\n";
    cin >> Student.BirthDate.Year;

    cout << "Please enter the month in your birthDate?\n";
    cin >> Student.BirthDate.Month;

    cout << "Please enter the day in your birthDate?\n";
    cin >> Student.BirthDate.Day;

    cout << "Name: \"" << Student.Name << "\"" << endl;
    cout << "Id: \"" << Student.Id << "\"" << endl;
    cout << "BirthDate: " << Student.BirthDate.Day << "-" << Student.BirthDate.Month << "-" << Student.BirthDate.Year << endl;

    return 0;
}
