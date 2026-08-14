#include <iostream>
using namespace std;

void mySumProcedure()
{
    int Num1, Num2;

    cout << "Please enter Number1?\n";
    cin >> Num1;

    cout << "Please enter Number2?\n";
    cin >> Num2;

    cout << "*********************\n";
    cout << Num1 + Num2 << endl;
}

int mySumFunction()
{
    int Num1, Num2;

    cout << "Please enter Number1?\n";
    cin >> Num1;

    cout << "Please enter Number2?\n";
    cin >> Num2;

    cout << "*********************\n";
    return Num1 + Num2;
}

int main()
{
    mySumProcedure();
    cout << mySumFunction() << endl;

    return 0;
}
