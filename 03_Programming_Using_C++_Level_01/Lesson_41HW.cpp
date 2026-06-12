#include <iostream>
using namespace std;

struct strinfo
{
    string phone;
    string email;
};

struct straddress
{
    string city;
    string country;
    string street;
    int zipcode;
};

struct strpersons
{
    string name;
    string age;
    straddress address;
    strinfo info;
};

void readperson(strpersons &personinfo)
{
    cout << "plz enter your name? \n";
    cin >> personinfo.name;

    cout << "plz ente your age? \n";
    cin >> personinfo.age;

    cout << "plz enter your city? \n";
    cin >> personinfo.address.city;

    cout << "plz enter your country? \n";
    cin >> personinfo.address.country;

    cout << "plz enter your street? \n";
    cin >> personinfo.address.street;

    cout << "plz enter your zipcode? \n";
    cin >> personinfo.address.zipcode;

    cout << "plz enter your email? \n";
    cin >> personinfo.info.email;

    cout << "plz enter your phone? \n";
    cin >> personinfo.info.phone;
}

void printperson(strpersons personinfo)
{
    cout << "\n*************************************\n";
    cout << "name: " << personinfo.name << endl;
    cout << "age: " << personinfo.age << endl;
    cout << "city: " << personinfo.address.city << endl;
    cout << "country: " << personinfo.address.country << endl;
    cout << "street: " << personinfo.address.street << endl;
    cout << "zipcode: " << personinfo.address.zipcode << endl;
    cout << "phone: " << personinfo.info.phone << endl;
    cout << "email: " << personinfo.info.email << endl;
    cout << "*************************************\n";
}

void readpersons(strpersons persons[2])
{
    readperson(persons[0]);
    readperson(persons[1]);
}

void printpersons(strpersons persons[2])
{
    printperson(persons[0]);
    printperson(persons[1]);
}

int main()
{
    strpersons persons[2];

    readpersons(persons);
    printpersons(persons);
    return 0;
}