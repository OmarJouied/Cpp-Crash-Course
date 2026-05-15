#include <iostream>
using namespace std;

int main()
{
    string MyName = "Omar Jouied", MyCity = "M'diq", MyCountry = "Morocco";
    int MyAge = 26;
    float MyMonthlySalary = 5000;
    char MyGender = 'M';
    bool IsMarried = false;

    cout << "******************************" << endl;
    cout << "Name: " << MyName << "." << endl;
    cout << "Age: " << MyAge << " Years." << endl;
    cout << "City: " << MyCity << "." << endl;
    cout << "Country: " << MyCountry << "." << endl;
    cout << "Monthly Salary: " << MyMonthlySalary << endl;
    cout << "Yearly Salary: " << MyMonthlySalary * 12 << endl;
    cout << "Gender: " << MyGender << endl;
    cout << "Married: " << IsMarried << endl;
    cout << "******************************" << endl;

    return 0;
}
