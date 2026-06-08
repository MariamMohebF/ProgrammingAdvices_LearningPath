#include <iostream>
using namespace std;

void myfunction1()
{
    cout << "This is my frist function, it got executed :-)" << endl;
}

void myfunction2()
{
    cout << "This is my second function" << endl;
}

int main()
{
    // calling function
    myfunction1();
    myfunction1();
    myfunction2();

    return 0;
}