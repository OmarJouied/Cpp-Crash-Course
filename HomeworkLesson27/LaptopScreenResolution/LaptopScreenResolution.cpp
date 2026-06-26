#include <iostream>
using namespace std;

struct stResolution
{
    int Width, Height;
};

struct stLaptop
{
    string Brand;
    stResolution ScreenRes;
};

int main()
{
    stLaptop Laptop;

    cout << "Enter Brand?\n";
    cin >> Laptop.Brand;

    cout << "Enter Width?\n";
    cin >> Laptop.ScreenRes.Width;

    cout << "Enter Height?\n";
    cin >> Laptop.ScreenRes.Height;

    cout << "Brand: \"" << Laptop.Brand << "\" - Pixels Number: " << Laptop.ScreenRes.Height * Laptop.ScreenRes.Width << endl;

    return 0;
}
