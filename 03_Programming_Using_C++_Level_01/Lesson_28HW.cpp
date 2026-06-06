#include <iostream>
using namespace std;

enum status {married,single};
enum gender {male, female};

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
    personaddress address;
    personcontactinfo contactinfo;
};


int main()
{

    personinfo person1;
    status ismarried;
    gender mygender;

    person1.name = "mora";
    person1.age = 33;
    person1.city = "sohag";
    person1.country = "egypt";
    person1.monthlysalary = 4444;
    person1.address.buildN = 77;
    person1.address.street = "mahata";
    person1.contactinfo.email = "mora@gmail.com";
    person1.contactinfo.facebook = "mora facebook";
    person1.contactinfo.phone = "1234567890";
    ismarried = status::married;
    mygender = gender::female;

    cout << "************************************************ \n";
    cout << "name: " << person1.name << endl;
    cout << "age: " << person1.age << endl;
    cout << "city: " << person1.city << endl;
    cout << "country: " << person1.country << endl;
    cout << "monthly salary: " << person1.monthlysalary << endl;
    cout << "yearly salary: " << person1.monthlysalary * 12 << endl;
    cout << "gender: " << mygender << endl;
    cout << "married: " << ismarried << endl;
    cout << "build n: " << person1.address.buildN << endl;
    cout << "street: " << person1.address.street << endl;
    cout << "email: " << person1.contactinfo.email << endl;
    cout << "facebook: " << person1.contactinfo.facebook << endl;
    cout << "phone: " << person1.contactinfo.phone << endl;
    cout << "************************************************ \n";

    return 0;
}