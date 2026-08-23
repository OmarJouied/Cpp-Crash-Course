#include <iostream>
using namespace std;

int GlobalVariable = 500, SameName = 100;

void IncrementGlobalVariable()
{
    GlobalVariable++;
}

void ShowGlobalVariable()
{
    int LocalVariable = 300;

    cout << GlobalVariable << endl;
    cout << LocalVariable << endl;
}

int main()
{
    int LocalVariable = 100, SameName = 200;

    IncrementGlobalVariable();
    ShowGlobalVariable();
    cout << GlobalVariable << endl; // no problem, because the name of global variable not existe in this local scope
    cout << ::GlobalVariable << endl;

    cout << LocalVariable << endl;

    cout << "Same Name Variable Global Scope: (use :: before variable name) " << ::SameName << endl;
    cout << "Same Name Variable Local Scope: " << SameName << endl;

    return 0;
}
