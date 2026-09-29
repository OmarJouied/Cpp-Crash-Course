#include <iostream>
using namespace std;

int main()
{
    short Age;

    cout << "Please enter your age?\n";
    cin >> Age;

    if (Age >= 18 && Age <= 45)
    {
        cout << "Valid Age" << endl;
    }
    else
    {
        cout << "Invalid Age" << endl;
    }

    return 0;
}
