#include <iostream>
using namespace std;

enum Gender { Male, Female };
enum Status { Single, Married };

int main()
{
    string Name, City, Country;
    unsigned short Age;
    float MonthlySalary;
    Gender UserGender;
    Status isMarried;

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

    UserGender = Gender::Male;
    isMarried = Status::Single;

    cout << "****************************" << endl;
    cout << "Name: " << Name << endl;
    cout << "Age: " << Age << " Years" << endl;
    cout << "City: " << City << endl;
    cout << "Country: " << Country << endl;
    cout << "Monthly Salary: " << MonthlySalary << endl;
    cout << "Yearly Salary: " << MonthlySalary * 12 << endl;
    cout << "Gender: " << UserGender << endl;
    cout << "Married: " << isMarried << endl;
    cout << "****************************" << endl;

    return 0;
}
