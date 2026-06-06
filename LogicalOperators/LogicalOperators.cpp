#include <iostream>
using namespace std;

int main()
{
    bool A = 1, B = 0;

    cout << "A && B = " << (A && B) << endl;
    cout << "A || B = " << (A || B) << endl;
    cout << "!A = " << !A << endl;
    cout << "!B = " << !B << endl;
    cout << "!(A && B) = " << !(A && B) << endl;
    cout << "!(A || B) = " << !(A || B) << endl;

    bool Result;

    Result = !(5 > 6 || 7 == 7) && !(1 || 0);

    cout << Result << endl;

    return 0;
}
