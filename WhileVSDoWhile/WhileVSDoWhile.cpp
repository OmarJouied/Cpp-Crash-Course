#include <iostream>
using namespace std;

void ReadPositiveNumberWithWhile(int& Number)
{
    cout << "Please enter a Positive number?\n";
    cin >> Number;

    while (Number < 0)
    {
        cout << "Please enter a Positive number?\n";
        cin >> Number;
    }
}

void ReadPositiveNumberWithDoWhile(int& Number)
{
    do
    {
        cout << "Please enter a Positive number?\n";
        cin >> Number;
    } while (Number < 0);
}

int ReadIntNumberInRangeUsingWhile(int From, int To)
{
    int Number;

    cout << "Please enter a number between " << From << " to " << To << endl;
    cin >> Number;

    while (Number < From || Number > To)
    {
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
    int Age;

    ReadPositiveNumberWithWhile(Age);
    ReadPositiveNumberWithDoWhile(Age);

    cout << Age << endl;

    cout << ReadIntNumberInRangeUsingWhile(0, 100) << endl;
    cout << ReadIntNumberInRangeUsingDoWhile(0, 100) << endl;

    int i = 6;
    while (i <= 5)
    {
        cout << "While Bloc\n";
        i++;
    }

    int j = 6;
    do
    {
        cout << "Do While Bloc\n";
        j++;
    } while (j <= 5);

    return 0;
}
