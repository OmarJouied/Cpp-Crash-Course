#include <iostream>
using namespace std;

struct stAddress
{
    string Street;
    string PostalCode;
};

struct stContactInfo
{
    string PhoneNumber;
    string Email;
    string FacebookPageLink;
};

struct stPerson
{
    string Name, City, Country;
    unsigned short Age;
    float MonthlySalary;
    char Gender;
    bool isMarried;
    stContactInfo ContactInfo;
    stAddress Address;
};

int main()
{
    stPerson Person;

    cout << "Enter your Name?" << endl;
    cin >> Person.Name;
    cout << "Enter your Age?" << endl;
    cin >> Person.Age;
    cout << "Enter your City?" << endl;
    cin >> Person.City;
    cout << "Enter your Country?" << endl;
    cin >> Person.Country;
    cout << "Enter your Monthly Salary?" << endl;
    cin >> Person.MonthlySalary;
    cout << "Enter your Gender?" << endl;
    cin >> Person.Gender;
    cout << "Enter if You Married?" << endl;
    cin >> Person.isMarried;
    cout << "Enter your Street?" << endl;
    cin >> Person.Address.Street;
    cout << "Enter your Postal Code?" << endl;
    cin >> Person.Address.PostalCode;
    cout << "Enter your Phone Number?" << endl;
    cin >> Person.ContactInfo.PhoneNumber;
    cout << "Enter your Email?" << endl;
    cin >> Person.ContactInfo.Email;
    cout << "Enter your Facebook Page Link?" << endl;
    cin >> Person.ContactInfo.FacebookPageLink;

    cout << "****************************" << endl;
    cout << "Name: " << Person.Name << endl;
    cout << "Age: " << Person.Age << " Years" << endl;
    cout << "City: " << Person.City << endl;
    cout << "Country: " << Person.Country << endl;
    cout << "Monthly Salary: " << Person.MonthlySalary << endl;
    cout << "Yearly Salary: " << Person.MonthlySalary * 12 << endl;
    cout << "Gender: " << Person.Gender << endl;
    cout << "Married: " << Person.isMarried << endl;
    cout << "Street: " << Person.Address.Street << endl;
    cout << "Postal Code: " << Person.Address.PostalCode << endl;
    cout << "Phone Number: " << Person.ContactInfo.PhoneNumber << endl;
    cout << "Email: " << Person.ContactInfo.Email << endl;
    cout << "Facebook Page Link: " << Person.ContactInfo.FacebookPageLink << endl;

    cout << "****************************" << endl;

    return 0;
}
