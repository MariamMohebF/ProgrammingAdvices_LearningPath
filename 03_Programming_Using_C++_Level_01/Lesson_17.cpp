// Take Care:
//==============

// before i use x or y → i should define them
// Define variables before using them.

// int sum = x + y;
// int x;
// int y;
// int sum = x + y;
// --------------------------------------------------------------

#include <iostream>
using namespace std;

int main()
{
    int age = 22;
    cout << age << endl; // 22

    //------------------------------

    int myage = 44;
    cout << myage << endl; // 44

    // or

    int myAge;
    myAge = 44;
    cout << myAge << endl; // 44

    //------------------------------

    int age1 = 22;
    cout << age1 << endl; // 22

    int age2 = 44;
    cout << age2 << endl; // 44
    //------------------------------

    int Age = 44;
    cout << "My age is " << Age << " years old." << endl;

    //------------------------------

    int i = 52;
    float f = 7.8;
    double d = 21.89822;
    char l = 'M';
    string t = "Mariam";
    bool b = true;

    cout << i << endl;
    cout << f << endl;
    cout << d << endl;
    cout << l << endl;
    cout << t << endl;
    cout << b << endl;

    //------------------------------

    char mylet = '\'';
    cout << mylet << endl;

    //------------------------------

    int x = 4;
    int y = 10;
    int sum = x + y;

    cout << sum << endl; // 14
    cout << x + y << endl;

    //------------------------------

    int xq = 4, yq = 10, sumq = x + y; // same data type

    cout << sumq << endl; // 14

    //------------------------------

    int xw = 4;
    int yw = 10;

    cout << xw + yw << endl; // 14

    //------------------------------

    int xe = 4, ye = 10, ze = 50;

    cout << xe + ye + ze << endl;

    //------------------------------

    char letter1 = 'A', letter2 = 'B', letter3 = 'C';

    cout << letter1 << letter2 << letter3 << " reversed is "
         << letter3 << letter2 << letter1 << endl;

    //------------------------------
    //  int age =10, Age=50;
    //  int My age;
    //  my-age;
    //  int _age;
    //  string 5name;
    //  string name;
    //  string @name;
    //  string amount#;
    //  string sales&amount;
    //  int for;
    //  int string;
    //------------------------------

    const int num = 15;
    // num=11;                //YOU CAN't

    //-----------------------------

    const int minutesperhour = 60;
    cout << minutesperhour << endl;

    const float Pi = 4.17;
    cout << Pi << endl;

    return 0;
}