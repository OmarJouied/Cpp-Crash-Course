#include <iostream>
using namespace std;

struct stProduct
{
    string Name;
    double Price;
    int Quantity;
};

void ReadProduct(stProduct& Product)
{
    cout << "Please enter the product name?\n";
    cin >> Product.Name;

    cout << "Please enter the product price?\n";
    cin >> Product.Price;

    cout << "Please enter the product quantity?\n";
    cin >> Product.Quantity;
}

double TotalProductPrice(stProduct Product)
{
    return Product.Price * Product.Quantity;
}

void PrintProduct(stProduct Product)
{
    cout << "*************************\n";
    cout << "Product Name: " << Product.Name << endl;
    cout << "Product Price: " << Product.Price << endl;
    cout << "Product Quantity: " << Product.Quantity << endl;
    cout << "*************************\n";
}

void ReadProducts(stProduct Products[2])
{
    ReadProduct(Products[0]);
    ReadProduct(Products[1]);
}

double TotalProductsPrice(stProduct Products[2])
{
    return TotalProductPrice(Products[0]) + TotalProductPrice(Products[1]);
}

void PrintProducts(stProduct Products[2])
{
    PrintProduct(Products[0]);
    PrintProduct(Products[1]);
}

int main()
{
    stProduct Products[2];

    ReadProducts(Products);
    PrintProducts(Products);

    cout << "Total Products Price: " << TotalProductsPrice(Products) << endl;

    return 0;
}
