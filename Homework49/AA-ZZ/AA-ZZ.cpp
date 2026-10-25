#include <iostream>
using namespace std;

int main()
{
    for (short PreLetter = 65; PreLetter <= 90; PreLetter++)
    {
        for (short SufLetter = 65; SufLetter <= 90; SufLetter++)
        {
            cout << (char)PreLetter << (char)SufLetter << '\n';
        }

        cout << endl;
    }
    return 0;
}
