#include <iostream>
#include <string>
using namespace std;

struct strcontactinfo
{
    string name;
    int age;
    string city;
    string country;
    float monthlysalary;
    char gender;
    bool ismarried;
};

void readcontactinfo(strcontactinfo &contactinfo)
{
    cout << "plz enter your name? \n";
    cin.ignore(1, '\n');
    getline(cin, contactinfo.name);

    cout << "plz enter your age? \n";
    cin >> contactinfo.age;

    cout << "plz enter your city? \n";
    cin >> contactinfo.city;

    cout << "plz enter your country? \n";
    cin >> contactinfo.country;

    cout << "plz enter your monthly salary? \n";
    cin >> contactinfo.monthlysalary;

    cout << "plz enter your gender? \n";
    cin >> contactinfo.gender;

    cout << "plz enter your material status? \n";
    cin >> contactinfo.ismarried;
}

void printcontactinfo(strcontactinfo contactinfo)
{
    cout << "\n**********************************\n";
    cout << "name: " << contactinfo.name << endl;
    cout << "age: " << contactinfo.age << endl;
    cout << "city: " << contactinfo.city << endl;
    cout << "country: " << contactinfo.country << endl;
    cout << "monthly salary: " << contactinfo.monthlysalary << endl;
    cout << "yearly salary: " << contactinfo.monthlysalary * 12 << endl;
    cout << "gender: " << contactinfo.gender << endl;
    cout << "Married: " << contactinfo.ismarried << endl;
    cout << "***************************************\n\n";
}

int main()
{
    strcontactinfo contact1;
    readcontactinfo(contact1);
    printcontactinfo(contact1);

    return 0;
}