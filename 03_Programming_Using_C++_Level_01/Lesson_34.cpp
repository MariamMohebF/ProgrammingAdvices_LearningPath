#include <iostream>
using namespace std;

void myfunction()
{
    cout << "This is my frist procedure, it got executed :-)" << endl;
}

string sfunction()
{
    return "This is  my frist returing value function, this is the value. \n";
}

int ifunction()
{
    int x = 10;
    int y = 20;
    return x * y;

    // if there is other code here
    // -> it will not be executed
    // -> because return take me out of the function
}

float ffunction()
{
    float x = 10.5;
    float y = 20.3;
    return x * y;
}

int main()
{
    // calling by say its name // not using cout <<
    myfunction();

    // calling by cout << functionName -> like dealing with a variable
    cout << sfunction() << endl;

    // The function's return type is int, which means it sends back an integer value.
    // Variable that receives the value returned by the int function, because both have the same type (int).
    // You don't have to store the returned value if you only need it once.
    // You don't have to store the returned value if you only need it once.

    int iresult;
    iresult = ifunction();
    cout << iresult << endl;

    iresult = ifunction() + 50;
    cout << iresult << endl;

    float fresult;
    fresult = ffunction();
    cout << fresult << endl;

    return 0;
}