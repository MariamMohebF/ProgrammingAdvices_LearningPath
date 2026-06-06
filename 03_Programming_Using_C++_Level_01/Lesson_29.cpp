#include <iostream>
using namespace std;

enum encolor {red, green, blue, yellow};
enum engender {male, female};
enum enmaritalstatus {single, married};

struct staddress
{
    string streetname;
    string buildingno;
    string pobox;
    string zipcode;
};

struct stcontactinfo
{
    string phone;
    string email;
    staddress address;
};

struct stperson
{
    string fristname;
    string lastname;

    stcontactinfo contactinfo;

    enmaritalstatus maritalstatus;
    engender gender;
    encolor favouritecolor;
};

int main()
{
    stperson person1;

    person1.fristname = "Mora";
    person1.lastname = "Moheb";

    person1.contactinfo.email = "mora@gmail.com";
    person1.contactinfo.phone = "01010101010101";

    person1.contactinfo.address.streetname = "mahata st";
    person1.contactinfo.address.buildingno = "2";
    person1.contactinfo.address.pobox = "77";
    person1.contactinfo.address.zipcode = "88";

    person1.gender = engender::female;
    person1.maritalstatus = enmaritalstatus::married;
    person1.favouritecolor = encolor::red;

    cout << "*****************************************\n\n";

    cout << "frist name: " << person1.fristname << endl;
    cout << "last name: " << person1.lastname << endl;
    cout << "phone: " << person1.contactinfo.phone << endl;
    cout << "email: " << person1.contactinfo.email << endl << endl;

    cout << "street name: " << person1.contactinfo.address.streetname << endl;
    cout << "building no: " << person1.contactinfo.address.buildingno << endl;
    cout << "pobox: " << person1.contactinfo.address.pobox << endl;
    cout << "zip code: " << person1.contactinfo.address.zipcode << endl << endl;

    cout << "gender: " << person1.gender << endl;
    cout << "marital status: " << person1.maritalstatus << endl;
    cout << "favorite color:  " << person1.favouritecolor << endl <<endl;

    cout << "*****************************************\n";

    return 0;
}