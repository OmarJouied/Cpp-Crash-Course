#include <iostream>
using namespace std;

struct stRectangle
{
    double Width, Height;
};

int main()
{
    stRectangle Rectangle;

    cout << "Enter the Width of Rectangle?\n";
    cin >> Rectangle.Width;

    cout << "Enter the Height of Rectangle?\n";
    cin >> Rectangle.Height;

    cout << "Rectangle Area = " << Rectangle.Height * Rectangle.Width << endl;

    return 0;
}
