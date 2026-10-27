#include <iostream>
using namespace std;

int ReadIntNumberInRange(int From, int To)
{
    int Number;

    cout << "Please enter a number between " << From << " to " << To << endl;
    cin >> Number;

    while (Number < From || Number > To)
    {
        cout << "Wrong Number, ";
        cout << "Please enter a number between " << From << " to " << To << endl;
        cin >> Number;
    }

    return Number;
}

int main()
{
    cout << "\n For Loop \n";
    for (int i = 1; i <= 5; i++)
    {
        cout << i << endl;
    }

    cout << "\n While Loop \n";
    int i = 1;
    while (i <= 5)
    {
        cout << i << endl;
        i++;
    }

    int Number;
    cout << "Please enter a positive number?\n";
    cin >> Number;

    while (Number < 0)
    {
        cout << "Wrong Number, PLease Enter a positive Number?\n";
        cin >> Number;
    }

    cout << "\nThe number you entered is " << Number << endl;

    int ChoisedNumber = ReadIntNumberInRange(18, 45);

    cout << "\n The Number is " << ChoisedNumber << endl;

    return 0;
}
