#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double x = 64;

    cout << "sqrt:" << endl;
    cout << "Square root value of 64: " << sqrt(x) << endl;
    cout << "Square root value of 50: " << sqrt(50) << endl;
    cout << "------------------------------\n" << endl;

    cout << "round:" << endl;
    cout << "Round value of 2.4: " << round(2.4) << endl;
    cout << "Round value of 2.5: " << round(2.5) << endl;
    cout << "Round value of 2.7: " << round(2.7) << endl;
    cout << "Round value of sqrt(50): " << round(sqrt(50)) << endl;
    cout << "(round(2.4) + round(5.6)) / round(3.4) = " << (round(2.4) + round(5.6)) / round(3.4) << endl;
    cout << "------------------------------\n" << endl;

    int z = 2, y = 4;
    cout << "pow:" << endl;
    cout << "Power value: z^y = (2^4) : " << pow(z, y) << endl;
    cout << "Power value: z^y = (4^3) : " << pow(4, 3) << endl;
    cout << "------------------------------\n" << endl;

    cout << "ceil & floor:" << endl;
    cout << "Ceiling value of 2.9: " << ceil(2.9) << endl;
    cout << "Floor value of 2.9: " << floor(2.9) << endl;
    cout << "Ceiling value of -2.9: " << ceil(-2.9) << endl;
    cout << "Floor value of -2.9: " << floor(-2.9) << endl;
    cout << "Ceiling value of 2.1: " << ceil(2.1) << endl;
    cout << "Round value of 2.1: " << round(2.1) << endl;
    cout << "------------------------------\n" << endl;

    cout << "abs:" << endl;
    cout << "Absolute value of -10: " << abs(-10) << endl;
    cout << "Absolute value of 10: " << abs(10) << endl;
    cout << "------------------------------\n" << endl;

    return 0;
}
