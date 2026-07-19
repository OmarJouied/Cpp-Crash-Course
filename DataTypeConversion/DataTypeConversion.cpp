#include <iostream>
#include <string>

using namespace std;

int main()
{
    int Num1;
    double Num2 = 18.99;

    //Num1 = Num2; // Implecit Conversion from double to int

    //Num1 = (int) Num2; // Explicit Conversion
    
    Num1 = int(Num2); // Explicit Conversion

    cout << Num1 << endl;

    // from string to number
    // use functions from string header file
    string str = "123.456";

    // convert string to Integer
    int num_int = stoi(str);

    // convert string to Float
    float num_float = stof(str);
    
    // convert string to Double
    double num_double = stod(str);

    cout << "num_int = " << num_int << endl;
    cout << "num_float = " << num_float << endl;
    cout << "num_double = " << num_double << endl;

    // from number to string
    // use functions from string header file
    string Str1, Str2;
    Str1 = to_string(num_int);
    Str2 = to_string(Num2);

    cout << Str1 << endl;
    cout << Str2 << endl;

    return 0;
}
