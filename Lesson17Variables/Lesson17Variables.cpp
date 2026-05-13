#include <iostream>
using namespace std;

int main()
{
    //int MyAge = 26;
    int MyAge;
    MyAge = 26;

    cout << MyAge << endl;
    cout << "My age is " << MyAge << " years old." << endl;

    MyAge = 30;

    cout << MyAge << endl;

    int myNumber = 52;
    float myFloatNumber = 7.89;
    double myDoubleNumber = 21.89822;
    char myLetter = 'O';
    string myText = "Omar";
    bool myBoolean = true;

    cout << myNumber << endl;
    cout << myFloatNumber << endl;
    cout << myDoubleNumber << endl;
    cout << myLetter << endl;
    cout << myText << endl;
    cout << myBoolean << endl;

    myLetter = '\'';
    cout << myLetter << endl;

    //int x = 4;
    //int y = 10;
    //int sum = x + y;
    //cout << sum;
    //int x = 4, y = 10, sum = x + y;
    //cout << sum;
    int x = 4, y = 10;
    cout << x + y << endl;

    char char1 = 'A', char2 = 'B', char3 = 'C';
    cout << char1 << char2 << char3 << " reversed is " << char3 << char2 << char1 << '\n';

    const int MinutesPerHour = 60;
    cout << MinutesPerHour << endl;

    return 0;
}
