#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str1 = "43.22", Str_int, Str_float, Str_double;
    int N1 = 20, Num_int, Num_int_float;
    double N2 = 33.5, Num_double;
    float N3 = 55.23, Num_float;

    Num_int = stoi(str1);
    Num_float = stof(str1);
    Num_double = stod(str1);

    Str_int = to_string(N1);
    Str_double = to_string(N2);
    Str_float = to_string(N3);

    //Num_int_float = N3;
    //Num_int_float = (int) N3;
    Num_int_float = int(N3);

    cout << str1 << endl;
    cout << N1 << endl;
    cout << N2 << endl;
    cout << N3 << endl;

    cout << Num_int << endl;
    cout << Num_float << endl;
    cout << Num_double << endl;

    cout << Str_int << endl;
    cout << Str_float << endl;
    cout << Str_double << endl;
    cout << Num_int_float << endl;

    return 0;
}
