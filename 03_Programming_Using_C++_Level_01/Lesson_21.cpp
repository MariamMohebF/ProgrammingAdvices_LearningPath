#include <iostream>
using namespace std;

int main()
{
    int a = 10, b = 20;

    cout << "a = " << a << endl; // 11
    cout << "b = " << b << endl; // 19

    a++; // the same as ++a
    b--; // the same as --b

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    return 0;
}