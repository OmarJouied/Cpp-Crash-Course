#include <iostream>
using namespace std;

int main()
{
    int A, B;

    cout << "Please enter the first number A?\n";
    cin >> A;

    cout << "Please enter the first number B?\n";
    cin >> B;

    cout << "A = " << A << ", B = " << B << endl << endl;

    cout << "A == B = " << (A == B) << endl;
    cout << "A != B = " << (A != B) << endl;
    cout << "A > B = " << (A > B) << endl;
    cout << "A < B = " << (A < B) << endl;
    cout << "A >= B = " << (A >= B) << endl;
    cout << "A <= B = " << (A <= B) << endl;

    return 0;
}
