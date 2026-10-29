#include <iostream>
using namespace std;

int main()
{
    int Sum = 0, Number;

    for (int i = 1; i <= 5; i++) {
        cout << "Please enter a number?\n";
        cin >> Number;

        if (Number > 50)
        {
            continue;
        }

        Sum += Number;
    }

    cout << "Total: " << Sum << endl;

    return 0;
}
