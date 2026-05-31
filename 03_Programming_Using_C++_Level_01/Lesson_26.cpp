#include <iostream>
#include <math.h>
using namespace std;

int main()
{

#pragma region // sqrt

    double x = 64;
    cout << "square root value of 64 is " << sqrt(x) << endl;

    cout << "square root value of 50 is " << sqrt(50);

#pragma endregion

#pragma region // round

    cout << "round value of 2.4 is " << round(2.4) << endl;
    cout << "round value of 2.5 is " << round(2.5) << endl;
    cout << "round value of 2.7 is " << round(2.7) << endl;

#pragma endregion

#pragma region // fuctions in functions

    cout << "square root value of 50 is " << sqrt(50);
    cout << "round value of is " << round(sqrt(50)) << endl;

    cout << "the value " << round(2.4) + round(5.6) << endl;
    cout << "the value " << round(2.4) / 2 << endl;

#pragma endregion

#pragma region // power

    int x = 2, y = 4;
    cout << "power value of x^y: (2^4) is " << pow(x, y) << endl;

    cout << "power value of x^y: (4^3) is " << pow(4, 3) << endl;

    cout << pow(x, 2) << endl; // equal x*x

#pragma endregion

#pragma region // ciel (greater than) and floor (smaller than)

    cout << "ceiling value of 2.9 is " << ceil(2.9) << endl; // 3
    cout << "floor value of 2.9 is " << floor(2.9) << endl;  // 2

    cout << "ceiling value of -2.9 is " << ceil(-2.9) << endl; // -2
    cout << "floor value of 2.9 is " << floor(-2.9) << endl;   // -3

    cout << abs(-10) << endl;
    cout << abs(10) << endl;

#pragma endregion

#pragma region // absolute function - -> +

    cout << "absolute value of -10 is " << abs(-10) << endl;
    cout << "absolute value of 10 is " << abs(10) << endl;

#pragma endregion

    return 0;
}