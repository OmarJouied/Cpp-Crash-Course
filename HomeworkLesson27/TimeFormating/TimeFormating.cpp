#include <iostream>
using namespace std;

struct stTime
{
    int Hours, Minutes, Seconds;
};

int main()
{
    stTime Time;

    cout << "Enter Hours?\n";
    cin >> Time.Hours;

    cout << "Enter Minutes?\n";
    cin >> Time.Minutes;

    cout << "Enter Seconds?\n";
    cin >> Time.Seconds;

    cout << Time.Hours << ":" << Time.Minutes << ":" << Time.Seconds << endl;

    return 0;
}
