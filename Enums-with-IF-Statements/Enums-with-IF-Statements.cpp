#include <iostream>
using namespace std;

enum enScreenColor { Red = 1, Blue = 2, Green = 3, Yellow = 4 };

void ShowScreenColorMenu()
{
    cout << "*****************************\n";
    cout << "Please Chose the number of your color?\n";
    cout << "(1) Red\n";
    cout << "(2) Blue\n";
    cout << "(3) Green\n";
    cout << "(4) Yellow\n";
    cout << "*****************************\n";
}

enScreenColor ReadScreenColor()
{
    int SC;
    cin >> SC;
    return (enScreenColor)SC;
}

void ApplayScreenColorCommand(enScreenColor ScreenColor)
{
    switch (ScreenColor) {
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
}

enum enCountryChoice { Jordan = 1, Tunisa = 2, Algeria = 3, Oman = 4, Egypt = 5, Iraq = 6, Other = 7 };

void ShowCountryMenu()
{
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
}

enCountryChoice ReadCountryChoice()
{
    int Country;
    cin >> Country;
    return (enCountryChoice)Country;
}

string GetCountryName(enCountryChoice CountryChoice)
{
    switch (CountryChoice) {
    case enCountryChoice::Jordan:
        return "Jordan";
    case enCountryChoice::Tunisa:
        return "Tunisa";
    case enCountryChoice::Algeria:
        return "Algeria";
    case enCountryChoice::Oman:
        return "Oman";
    case enCountryChoice::Egypt:
        return "Egypt";
    case enCountryChoice::Iraq:
        return "Iraq";
    default:
        return "Other";
    }
}

int main()
{
    
    ShowScreenColorMenu();

    ApplayScreenColorCommand(ReadScreenColor());

    ShowCountryMenu();

    string CountryName = GetCountryName(ReadCountryChoice());

    cout << "Your Country Choice: " << CountryName << endl;

    return 0;
}
