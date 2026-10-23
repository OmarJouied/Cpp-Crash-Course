#include <iostream>
using namespace std;

void ReadArrayData(int Array[100], int& Length)
{
    cout << "Please enter the Length of Array?\n";
    cin >> Length;

    for (int i = 0; i < Length; i++)
    {
        cout << "Number " << i + 1 << " ";
        cin >> Array[i];
    }
}

void PrintArrayData(int Array[100], int Length)
{
    for (int i = 0; i < Length; i++)
    {
        cout << "Number [" << i + 1 << "] : " << Array[i] << endl;
    }
}

int CalculateArraySum(int Array[100], int Length)
{
    int Sum = 0;

    for (int i = 0; i < Length; i++)
    {
        Sum += Array[i];
    }

    return Sum;
}

float CalculateArrayAverage(int Array[100], int Length)
{
    return (float)CalculateArraySum(Array, Length) / Length;
}

void PrintStars()
{
    cout << "\n";
    for (int i = 0; i < 32; i++)
    {
        cout << "*";
    }
    cout << "\n";
}

int main()
{
    int Array[100], Length = 0;

    ReadArrayData(Array, Length);
    PrintArrayData(Array, Length);

    PrintStars();

    cout << "Sum = " << CalculateArraySum(Array, Length) << endl;
    cout << "Average = " << CalculateArrayAverage(Array, Length) << endl;

    return 0;
}
