#include <iostream>
#include <string>
using namespace std;

// Variables are not unique.
// Remember: every variable has a name, a value, and a reference (memory address).

// Global variable: it exists during the entire program life cycle.
int x = 8;

void myfunction()
{
    int x = 500;

    cout << "the value of x inside function is: " << x << endl;
}

int main()
{
    // Local variable: it exists only during the function life cycle.
    cout << "the local value of x inside main is: " << x << endl;

    myfunction();

    cout << "the global value of x is: " << ::x << endl;

    ::x++;
    cout << "the global value of x is: " << ::x << endl;

    ::x = 7000;
    cout << "the global value of x is: " << ::x << endl;

    return 0;
}