#include <iostream>
using namespace std;

int ReadIntNumberInRangeUsingWhile(int From, int To)
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

int ReadIntNumberInRangeUsingDoWhile(int From, int To)
{
    int Number;

    do
    {
        cout << "Please enter a number between " << From << " to " << To << endl;
        cin >> Number;
    } while (Number < From || Number > To);

    return Number;
}

int main()
{
    int NumberWithWhile = ReadIntNumberInRangeUsingWhile(18, 45);
    int NumberWithDoWhile = ReadIntNumberInRangeUsingDoWhile(18, 45);

    cout << "Number with While: " << NumberWithWhile << endl;
    cout << "Number with Do While: " << NumberWithDoWhile << endl;

    return 0;
}
