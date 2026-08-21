#include <iostream>
using namespace std;

int x = 300;

void MyFunction1()
{
    int x = 500;

    cout << "The value of x inside function is: " << x << endl;
}

int main()
{
    int x = 10;

    cout << "The local value of x inside Main is: " << x << endl;
    MyFunction1();

    cout << "The global value of x is: " << ::x << endl;
    
    ::x++;

    cout << "The global value of x is: " << ::x << endl;
    return 0;
}
