#include <iostream>
#include <math.h>
using namespace std;

struct stadress
{
    string street;
    string pobox;
};

struct stowner
{
    string fullname;
    string phone;
    stadress adress;
};

struct car
{
    string brand;
    string model;
    int year;
    stowner owner;
};

int main()
{

    car mycar1, mycar2, x;

    mycar1.brand = "BMW";
    mycar1.model = "x5";
    mycar1.year = 2000;

    mycar1.owner.fullname = "Mariam Moheb";
    mycar1.owner.phone = "123";
    mycar1.owner.adress.pobox = "000";

    mycar2.brand = "Ford";
    mycar2.model = "Mustang";
    mycar2.year = 2010;

    cout << "plz enter your car x brand? \n";
    cin >> x.brand;

    cout << "plz enter your car x model? \n";
    cin >> x.model;

    cout << "plz enter your car x year? \n";
    cin >> x.year;

    cout << mycar1.brand << " " << mycar1.model << " " << mycar1.year << endl;
    cout << mycar1.owner.fullname << mycar1.owner.phone << endl;

    cout << mycar2.brand << " " << mycar2.model << " " << mycar2.year << endl;
    cout << x.brand << " " << x.model << " " << x.year << endl;

    return 0;
}