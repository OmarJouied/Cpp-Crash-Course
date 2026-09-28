#include <iostream>
using namespace std;

int main()
{
    short Mark;

    cout << "Please enter your mark?\n";
    cin >> Mark;

    if (Mark >= 50)
    {
        cout << "PASS";
    }
    else
    {
        cout << "FAIL";
    }

    return 0;
}
