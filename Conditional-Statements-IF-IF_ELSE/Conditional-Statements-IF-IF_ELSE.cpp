#include <iostream>
using namespace std;

int main()
{
    cout << "if without else\n-------------------\n";

    int x = 10;

    if (x > 5 && x <= 20)
    {
        cout << "The code of if body has executed." << endl;
    }

    cout << "The code after if body always executed." << endl;

    cout << "if with else\n-------------------\n";

    int y;

    cout << "Please enter a number?\n";
    cin >> y;

    if (y > 5)
    {
        cout << "Yes, X is greater than 5" << endl;
    }
    else
    {
        cout << "No, X is less than 5" << endl;
    }

    cout << "The code after if body always executed." << endl;

    return 0;
}
