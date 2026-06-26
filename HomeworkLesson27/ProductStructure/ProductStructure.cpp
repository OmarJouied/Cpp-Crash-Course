#include <iostream>
using namespace std;

struct stProduct
{
    string Id;
    string Name;
    float Price;
    int Quantity;
};

int main()
{
    stProduct Product;

    cout << "---------Product Creation---------\n\n";

    cout << "Please enter the product id?\n";
    cin >> Product.Id;

    cout << "Please enter the product name?\n";
    cin >> Product.Name;

    cout << "Please enter the product price?\n";
    cin >> Product.Price;

    cout << "Please enter the product quantity?\n";
    cin >> Product.Quantity;

    cout << "ID: " << Product.Id << endl;
    cout << "NAME: " << Product.Name << endl;
    cout << "PRICE: $" << Product.Price << endl;
    cout << "QUANTITY: " << Product.Quantity << endl;

    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
