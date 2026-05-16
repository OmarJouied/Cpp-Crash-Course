#include <iostream>
using namespace std;

int main()
{
    string Name, City, Country;
    unsigned short Age;
    float MonthlySalary;
    char Gender;
    bool isMarried;

    cout << "Enter your Name?" << endl;
    cin >> Name;
    cout << "Enter your Age?" << endl;
    cin >> Age;
    cout << "Enter your City?" << endl;
    cin >> City;
    cout << "Enter your Country?" << endl;
    cin >> Country;
    cout << "Enter your Monthly Salary?" << endl;
    cin >> MonthlySalary;
    cout << "Enter your Gender?" << endl;
    cin >> Gender;
    cout << "Enter if You Married?" << endl;
    cin >> isMarried;

    cout << "****************************" << endl;
    cout << "Name: " << Name << endl;
    cout << "Age: " << Age << " Years" << endl;
    cout << "City: " << City << endl;
    cout << "Country: " << Country << endl;
    cout << "Monthly Salary: " << MonthlySalary << endl;
    cout << "Yearly Salary: " << MonthlySalary * 12 << endl;
    cout << "Gender: " << Gender << endl;
    cout << "Married: " << isMarried << endl;
    cout << "****************************" << endl;

    return 0;
}
