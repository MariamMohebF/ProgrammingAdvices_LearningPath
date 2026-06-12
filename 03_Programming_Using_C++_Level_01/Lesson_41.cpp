#include <iostream>
using namespace std;

struct strinfo
{
    string fname;
    string lname;
    int age;
    string phone;
};

int main()
{
    strinfo persons[2];

    persons[0].fname = "Mariam";
    persons[0].lname = "Moheb";
    persons[0].age = 22;
    persons[0].phone = "010101010101";

    persons[1].fname = "Mora";
    persons[1].lname = "Moheb";
    persons[1].age = 44;
    persons[1].phone = "0120120120120";

    cout << "person 1 first name " << persons[0].fname << endl;

    return 0;
}