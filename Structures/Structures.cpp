#include <iostream>
using namespace std;

struct stAddress
{
    string Street1;
    string POBOX;
};

struct stOwner
{
    string FullName;
    string Phone;
    stAddress Address;
};

struct Car
{
    string Brand;
    string Model;
    int Year;
    stOwner Owner;
};

int main()
{
    Car MyCar1, MyCar2;

    MyCar1.Brand = "BMW";
    MyCar1.Model = "X5";
    MyCar1.Year = 2000;
    MyCar1.Owner.FullName = "Omar Jouied";
    MyCar1.Owner.Phone = "0701018374";
    
    MyCar2.Brand = "Ford";
    MyCar2.Model = "Mustang";
    MyCar2.Year = 2022;
    MyCar2.Owner.FullName = "Person";
    MyCar2.Owner.Phone = "0616566598";


    cout << MyCar1.Brand << " " << MyCar1.Model << " " << MyCar1.Year << endl;
    cout << MyCar1.Owner.FullName << " " << MyCar1.Owner.Phone << endl;

    cout << MyCar2.Brand << " " << MyCar2.Model << " " << MyCar2.Year << endl;
    cout << MyCar2.Owner.FullName << " " << MyCar2.Owner.Phone << endl;

    return 0;
}
