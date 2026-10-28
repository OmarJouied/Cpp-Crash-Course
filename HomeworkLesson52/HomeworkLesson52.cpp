#include <iostream>
using namespace std;

int main()
{
    int Arr[10] = {10, 44, 33, 22, 99, 20, 88, 99, 100, 55};
    
    for (int i = 0; i < 10; i++)
    {
        if (Arr[i] == 20)
        {
            cout << "Founded At Position [" << i << "]\n";
            break;
        }
    }

    return 0;
}
