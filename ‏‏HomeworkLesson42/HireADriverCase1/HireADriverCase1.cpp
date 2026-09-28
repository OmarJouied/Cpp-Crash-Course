#include <iostream>
using namespace std;

int main()
{
    short Age;
    bool HasADriverLicense;

    cout << "Please enter your Age?\n";
    cin >> Age;

    cout << "Please enter if you have a Driver License?\n";
    cin >> HasADriverLicense;

    if (Age > 21 && HasADriverLicense == true)
    {
        cout << "Hired" << endl;
    }
    else
    {
        cout << "Rejected" << endl;
    }

    return 0;
}
