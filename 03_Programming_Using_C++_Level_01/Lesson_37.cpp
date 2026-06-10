#include <iostream>
using namespace std;

void myfunction1(int n1)
{
    n1 = 7000;
    cout << "number inside function1 became = " << n1 << endl;
}

void myfunction2(int &n1)
{
    n1 = 7000;
    cout << "number inside function2 became = " << n1 << endl;
}

int main()
{
    int n1;

    n1 = 1000;

    cout << "number in main before any functions = " << n1 << endl;

    myfunction1(n1);

    cout << "number after calling the function1(by val) became = " << n1 << endl;

    myfunction2(n1);

    cout << "number after calling the function2 (by ref) became = " << n1 << endl;

    cout << "n1 = " << n1 << endl;
    cout << "&n1 = " << &n1 << endl;
}