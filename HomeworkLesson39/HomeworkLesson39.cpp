#include <iostream>
using namespace std;

int main()
{
    float Grades[3];

    cout << "Please Enter Grade 1?\n";
    cin >> Grades[0];

    cout << "Please Enter Grade 2?\n";
    cin >> Grades[1];

    cout << "Please Enter Grade 3?\n";
    cin >> Grades[2];

    cout << "*********************\n";
    cout << "The average of grades is " << (Grades[0] + Grades[1] + Grades[2]) / 3 << endl;

    return 0;
}
