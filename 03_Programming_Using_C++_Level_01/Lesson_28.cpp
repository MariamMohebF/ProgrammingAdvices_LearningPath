#include <iostream>
using namespace std;

enum color {Red, Green, Yellow, Blue};
enum direction {North, South, East, West};
enum week {Sat=1, Sun=2, Mon=3, Tue=4, Wed=5, Thu=6, Fri=7};
enum gender { Male, Female};
enum status {Single, Married};

int main()
{
    color mycolor, mycolor1;
    direction mydirection;
    week today;
    status mystatus;
    gender mygender;

    mycolor = color::Red;
    // mycolor1 = 0;
    mydirection = direction::North;
    today = week::Sun;
    mystatus = status::Married;
    mygender = gender::Female;

    cout << "my color is " << mycolor << endl;
    cout << "my color is " << mycolor1 << endl;
    cout << "my directon is " << mydirection << endl;
    cout << "today is " << today << endl;
    cout << "my status is " << mystatus << endl;
    cout << "my gender is " << mygender << endl;

    return 0;
}