#include <iostream>
using namespace std;

struct stDate
{
    int Day, Month, Year;
};

struct stMedicine
{
    string Name;
    stDate ExpiryDate;
};

int main()
{
    stMedicine Drug;

    cout << "Enter the name of Drug?\n";
    cin >> Drug.Name;

    cout << "Enter the day of expiry date?\n";
    cin >> Drug.ExpiryDate.Day;

    cout << "Enter the month of expiry date?\n";
    cin >> Drug.ExpiryDate.Month;

    cout << "Enter the year of expiry date?\n";
    cin >> Drug.ExpiryDate.Year;

    cout << "Drug Name: \"" << Drug.Name << "\" - Expiry Date: " << Drug.ExpiryDate.Day << "-" << Drug.ExpiryDate.Month << "-" << Drug.ExpiryDate.Year << endl;

    return 0;
}
