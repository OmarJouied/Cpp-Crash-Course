#include <iostream>
using namespace std;

enum enScreenColor { Red = 1, Blue = 2, Green = 3, Yellow = 4 };
enum enCountryChoice { Jordan = 1, Tunisa = 2, Algeria = 3, Oman = 4, Egypt = 5, Iraq = 6, Other = 7 };

int main()
{
    cout << "*****************************\n";
    cout << "Please Chose the number of your color?\n";
    cout << "(1) Red\n";
    cout << "(2) Blue\n";
    cout << "(3) Green\n";
    cout << "(4) Yellow\n";
    cout << "*****************************\n";
    cout << "Your Choice? ";

    int UserChose;
    enScreenColor Color;

    cin >> UserChose;
    Color = (enScreenColor) UserChose;

    switch (Color) {
    case enScreenColor::Red:
        system("color 4F");
        break;
    case enScreenColor::Blue:
        system("color 1F");
        break;
    case enScreenColor::Green:
        system("color 2F");
        break;
    case enScreenColor::Yellow:
        system("color 6F");
        break;
    default:
        system("color FA");
    }

    cout << "*****************************\n";
    cout << "Please Chose the number of your country?\n";
    cout << "(1) Jordan\n";
    cout << "(2) Tunisa\n";
    cout << "(3) Algeria\n";
    cout << "(4) Oman\n";
    cout << "(5) Egypt\n";
    cout << "(6) Iraq\n";
    cout << "(7) Other\n";
    cout << "*****************************\n";
    cout << "Your Choice? ";

    int CountryNumber;
    enCountryChoice Country;

    cin >> CountryNumber;
    Country = (enCountryChoice)CountryNumber;

    switch (Country) {
    case enCountryChoice::Jordan:
        cout << "Your country is Jordan\n";
        break;
    case enCountryChoice::Tunisa:
        cout << "Your country is Tunisa\n";
        break;
    case enCountryChoice::Algeria:
        cout << "Your country is Algeria\n";
        break;
    case enCountryChoice::Oman:
        cout << "Your country is Oman\n";
        break;
    case enCountryChoice::Egypt:
        cout << "Your country is Egypt\n";
        break;
    case enCountryChoice::Iraq:
        cout << "Your country is Iraq\n";
        break;
    default:
        cout << "Your country is Other\n";
    }

    return 0;
}
