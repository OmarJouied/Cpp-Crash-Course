#include <iostream>
using namespace std;

//void MyFunction(int Num) // by value
//{
//    Num = 7000;
//
//    cout << "Number inside function became = " << Num << endl;
//}

void MyFunction(int &Num) // by ref
{
    Num = 7000;
    
    cout << &Num << endl;
    
    cout << "Number inside function became = " << Num << endl;
}

int main()
{
    int Num;

    Num = 1000;
    
    cout << &Num << endl;

    MyFunction(Num);

    cout << "Number after calling the function became = " << Num << endl;

    return 0;
}
