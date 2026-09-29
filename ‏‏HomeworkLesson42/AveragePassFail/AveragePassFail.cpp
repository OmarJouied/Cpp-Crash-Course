#include <iostream>
using namespace std;

void ReadMarks(float Marks[3])
{
    cout << "Please enter Mark1?\n";
    cin >> Marks[0];

    cout << "Please enter Mark2?\n";
    cin >> Marks[1];

    cout << "Please enter Mark3?\n";
    cin >> Marks[2];
}

float CalculateMarksAverage(float Marks[3])
{
    return (Marks[0] + Marks[1] + Marks[2]) / 3;
}

void PrintMarks(float Marks[3])
{
    cout << "Mark 1: " << Marks[0] << endl;
    cout << "Mark 2: " << Marks[1] << endl;
    cout << "Mark 3: " << Marks[2] << endl;
}

int main()
{
    float Marks[3], Average;

    ReadMarks(Marks);

    Average = CalculateMarksAverage(Marks);

    PrintMarks(Marks);

    cout << "Average: " << Average << endl;

    if (Average >= 50)
    {
        cout << "PASS" << endl;
    }
    else
    {
        cout << "FAIL" << endl;
    }

    return 0;
}
