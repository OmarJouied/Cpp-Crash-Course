#include <iostream>
#include <string>

using namespace std;

struct stInfo
{
    string FirstName;
    string LastName;
    short Age;
    string Phone;
};

void ReadInfo(stInfo& Info)
{
    cout << "Please enter your FirstName ?\n";
    cin >> Info.FirstName;

    cout << "Please enter your LastName ?\n";
    cin >> Info.LastName;

    cout << "Please enter your Age ?\n";
    cin >> Info.Age;

    cout << "Please enter your Phone ?\n";
    cin >> Info.Phone;
}

void PrintInfo(stInfo& Info)
{
    cout << "\n*****************************\n";

    cout << "FirstName: " << Info.FirstName << endl;
    cout << "LastName: " << Info.LastName << endl;
    cout << "Age: " << Info.Age << endl;
    cout << "Phone: " << Info.Phone << endl;

    cout << "\n*****************************\n";
}

int main()
{
    stInfo Info1;
    ReadInfo(Info1);
    PrintInfo(Info1);
    
    stInfo Info2;
    ReadInfo(Info2);
    PrintInfo(Info2);
    
    return 0;
}
