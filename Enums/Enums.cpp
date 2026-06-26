#include <iostream>
using namespace std;

enum Color { Red = 100, Green = 200, Yellow = 300, Blue = 400 };
enum Direction { North, South, East, West };
enum Week { Sat, Sun, Mon, Tue, Wed, Thu, Fri };
enum Gendor { Male, Female };
enum Status { Single, Married };

int main()
{
    Color MyColor;
    Direction MyDirection;
    Week Today;
    Status MyStatus;

    MyColor = Color::Green;
    MyDirection = Direction::North;
    Today = Week::Wed;
    MyStatus = Status::Single;

    cout << "Color: " << MyColor << endl;
    cout << "Direction: " << MyDirection << endl;
    cout << "Today: " << Today << endl;
    cout << "Status: " << MyStatus << endl;

    return 0;
}
