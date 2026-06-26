#include <iostream>
using namespace std;

struct stBook
{
    string Title;
    string Author;
    int Pages;
    float Price;
};

int main()
{
    stBook Book;

    cout << "Enter the book title?\n";
    cin >> Book.Title;

    cout << "Enter the book author?\n";
    cin >> Book.Author;

    cout << "Enter the book pages?\n";
    cin >> Book.Pages;

    cout << "Enter the book price?\n";
    cin >> Book.Price;

    cout << "Book Title: \"" << Book.Title << "\", Author: \"" << Book.Author << "\", Pages: " << Book.Pages << ", Price: " << Book.Price << endl;

    return 0;
}
