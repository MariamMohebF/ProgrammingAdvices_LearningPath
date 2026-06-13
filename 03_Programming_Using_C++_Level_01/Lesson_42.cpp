#include <iostream>
using namespace std;

int main()
{

#pragma region // if
    int x = 10;

    if (x > 5)
    {
        cout << "the code of if body has executed." << endl;
    }

    cout << "the code after if body always executed." << endl;

    if (x >= 5 && x <= 20)
    {
        cout << "the code of if body has executed." << endl;
    }

    cout << "the code after if body always executed." << endl;

    if (x >= 5 && x <= 8)
    {
        cout << "the code of if body has executed." << endl;
    }

    cout << "the code after if body always executed." << endl;

    if (x >= 5 || x <= 8)
    {
        cout << "the code of if body has executed." << endl;
    }

    cout << "the code after if body always executed." << endl;
#pragma endregion

#pragma region // if else
    int y;

    cout << "plz enter your number? \n";
    cin >> y;

    if (y > 5)
    {
        cout << "yes, y is greater than 5" << endl;
    }
    else
    {
        cout << "no, y is less than 5" << endl;
    }

    cout << "the code after if body always executed." << endl;
#pragma endregion

    return 0;
}