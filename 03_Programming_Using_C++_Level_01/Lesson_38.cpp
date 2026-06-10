#include <iostream>
using namespace std;

struct strinfo
{
    string fname;
    string lname;
    int age;
    string phone;
};

void readinfo(strinfo &info)
{
    cout << "plz enter your frist name? \n";
    cin >> info.fname;

    cout << "plz enter your last name? \n";
    cin >> info.lname;

    cout << "plz enter your age? \n";
    cin >> info.age;

    cout << "plz enter your phone? \n";
    cin >> info.phone;
}

void printinfo(strinfo info)
{
    cout << "\n****************************\n";
    cout << "frist name: " << info.fname << endl;
    cout << "last name: " << info.lname << endl;
    cout << "age: " << info.age << endl;
    cout << "phone: " << info.phone << endl;
    cout << "*******************************\n\n";
}

int main()
{
    strinfo person1info;
    readinfo(person1info);
    printinfo(person1info);

    strinfo person2info;
    readinfo(person2info);
    printinfo(person2info);

    return 0;
}