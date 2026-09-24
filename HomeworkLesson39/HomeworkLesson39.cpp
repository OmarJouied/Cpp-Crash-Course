#include <iostream>
using namespace std;

void ReadGrades(float Grades[3])
{
    cout << "Please Enter Grade 1?\n";
    cin >> Grades[0];

    cout << "Please Enter Grade 2?\n";
    cin >> Grades[1];

    cout << "Please Enter Grade 3?\n";
    cin >> Grades[2];
}

float CalculateAverage(float Grades[3])
{
    return (Grades[0] + Grades[1] + Grades[2]) / 3;
}

void PrintAverage(float Average)
{
    cout << "*********************\n";
    cout << "The average of grades is " << Average << endl;
}

int main()
{
    float Grades[3], Average;

    ReadGrades(Grades);

    Average = CalculateAverage(Grades);

    PrintAverage(Average);

    return 0;
}
