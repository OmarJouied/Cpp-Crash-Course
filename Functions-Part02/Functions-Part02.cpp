#include <iostream>
using namespace std;

void myFunction()
{
    cout << "This is my first procedure, it got executed :-)" << endl;
}

string myFunction2()
{
    return "This is my first returning value function, this is the value.";
}

int MyFunction3()
{
    int x = 10;
    int y = 20;

    return x * y;
}

int main()
{
    myFunction();
    cout << myFunction2() << endl;

    int Result;

    Result = MyFunction3() + 50;

    cout << Result << endl;
    return 0;
}
