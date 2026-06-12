#include <iostream>
using namespace std;

int main()
{
    string s = "Mohammed abo-hadhoud";

    cout << s[0] << endl;
    cout << s[2] << endl;
    cout << s[7] << endl;

    int x[5] = {22, 18, 2, 55, 520};

    cout << x[0] << endl;
    cout << x[1] << endl;
    cout << x[2] << endl;
    cout << x[3] << endl;
    cout << x[4] << endl;

    cout << x[0] + x[4] << endl;

    int y[5];
    y[0] = 10;
    y[1] = 20;

    cout << y[0] + y[1] << endl;

    return 0;
}