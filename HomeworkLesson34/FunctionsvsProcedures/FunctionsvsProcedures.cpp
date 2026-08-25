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

int mySumFunction(int Num1, int Num2)
{
    return Num1 + Num2;
}

int main()
{
    mySumProcedure();
    cout << mySumFunction(10, 20) << endl;
    cout << mySumFunction(5, 7) << endl;
    cout << mySumFunction(3, 4) << endl;
    cout << mySumFunction(150, 20) << endl;

    int Num1, Num2;

    cout << "Please enter Number1?\n";
    cin >> Num1;

    cout << "Please enter Number2?\n";
    cin >> Num2;

    cout << mySumFunction(Num1, Num2) << endl;

    return 0;
}
