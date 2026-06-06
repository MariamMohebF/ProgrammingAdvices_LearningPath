#include <iostream>
using namespace std;

struct personcontactinfo
{
    string phone;
    string email;
    string facebook;
};

struct personaddress
{
    int buildN;
    string street;
};

struct personinfo
{
    string name;
    int age;
    string city;
    string country;
    float monthlysalary;
    char gender;
    bool isMarried;
    personaddress address;
    personcontactinfo contactinfo;
};

int main()
{
    personinfo person1, person2;

    person1.name = "Mora";
    person1.age = 22;
    person1.city = "sohag";
    person1.country = "egypt";
    person1.monthlysalary = 5000;
    person1.gender = 'f';
    person1.isMarried = true;
    person1.address.buildN = 1;
    person1.address.street = "Mahata st";
    person1.contactinfo.email = "email@gmail.com";
    person1.contactinfo.facebook = "facebook mora";
    person1.contactinfo.phone = "12345";

    cout << "************************************************ \n";
    cout << "name: " << person1.name << endl;
    cout << "age: " << person1.age << endl;
    cout << "city: " << person1.city << endl;
    cout << "country: " << person1.country << endl;
    cout << "monthly salary: " << person1.monthlysalary << endl;
    cout << "yearly salary: " << person1.monthlysalary * 12 << endl;
    cout << "gender: " << person1.gender << endl;
    cout << "married: " << person1.isMarried << endl;
    cout << "build n: " << person1.address.buildN << endl;
    cout << "street: " << person1.address.street << endl;
    cout << "email: " << person1.contactinfo.email << endl;
    cout << "facebook: " << person1.contactinfo.facebook << endl;
    cout << "phone: " << person1.contactinfo.phone << endl;
    cout << "************************************************ \n";

    cout << "plz enter name? \n"
         << endl;
    cin >> person2.name;

    cout << "plz enter age? \n"
         << endl;
    cin >> person2.age;

    cout << "plz enter city? \n";
    cin >> person2.city;

    cout << "plz enter country? \n";
    cin >> person2.country;

    cout << "plz enter monthly salary? \n";
    cin >> person2.monthlysalary;

    cout << "plz enter gender? \n";
    cin >> person2.gender;

    cout << "plz enter married? \n";
    cin >> person2.isMarried;

    cout << "plz enter build number? \n";
    cin >> person2.address.buildN;

    cout << "plz enter street? \n";
    cin >> person2.address.street;

    cout << "plz enter facebook? \n";
    cin >> person2.contactinfo.facebook;

    cout << "plz enter email? \n";
    cin >> person2.contactinfo.email;

    cout << "plz enter phone? \n";
    cin >> person2.contactinfo.phone;

    cout << "************************************************ \n";
    cout << "name: " << person2.name << endl;
    cout << "age: " << person2.age << endl;
    cout << "city: " << person2.city << endl;
    cout << "country: " << person2.country << endl;
    cout << "monthly salary: " << person2.monthlysalary << endl;
    cout << "yearly salary: " << person2.monthlysalary * 12 << endl;
    cout << "gender: " << person2.gender << endl;
    cout << "married: " << person2.isMarried << endl;
    cout << "build n: " << person2.address.buildN << endl;
    cout << "street: " << person2.address.street << endl;
    cout << "email: " << person2.contactinfo.email << endl;
    cout << "facebook: " << person2.contactinfo.facebook << endl;
    cout << "phone: " << person2.contactinfo.phone << endl;
    cout << "************************************************ \n";

    return 0;
}
