#include <iostream>
using namespace std;

int main()
{
    int PINCode;

    cout << "Please enter your PIN code?\n";
    cin >> PINCode;

    if (PINCode == 1234)
    {
        cout << "Your Balance is: 7500" << endl;
    }
    else
    {
        cout << "Wrong PIN" << endl;
    }

    return 0;
}
