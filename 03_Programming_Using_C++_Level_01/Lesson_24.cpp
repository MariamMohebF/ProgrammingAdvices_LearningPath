#include <iostream>
using namespace std;

int main()
{

    int a = 10, b = 20;

    // cout << (a = b) << endl;   //TACK CARE not error but wrong result
    // the result is not -> a = 20, b = 20;

    cout << (a == b) << endl; // 0
    cout << (a != b) << endl; // 1
    cout << (a < b) << endl;  // 1
    cout << (a > b) << endl;  // 0
    cout << (a >= b) << endl; // 0
    cout << (a <= b) << endl; // 1

    int a = 20, b = 20;

    cout << (a == b) << endl; // 1
    cout << (a != b) << endl; // 0
    cout << (a < b) << endl;  // 0
    cout << (a > b) << endl;  // 0
    cout << (a >= b) << endl; // 1
    cout << (a <= b) << endl; // 1
    return 0;
}