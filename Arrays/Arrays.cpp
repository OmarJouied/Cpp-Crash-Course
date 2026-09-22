#include <iostream>
using namespace std;

int main()
{

    int x[5] = {22, 18, 2, 55, 520};

    cout << x[0] << endl; // Prints 22
    cout << x[1] << endl; // Prints 18
    cout << x[2] << endl; // Prints 2
    cout << x[3] << endl; // Prints 55
    cout << x[4] << endl; // Prints 520

    cout << x[0] + x[4] << endl; // Prints 542

    int y[5];

    y[0] = 10;
    y[1] = 20;

    cout << y[0] + y[1] << endl;

    return 0;
}
