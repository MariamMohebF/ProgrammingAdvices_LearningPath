#include <iostream>
using namespace std;

int main()
{
    // &&  logical operation
    // &   binary and
    // !!  logical operation or
    // !   logical operation not -> reverse the operation

    bool a = 1, b = 0;

    cout << (a && b) << endl;  // 0
    cout << (a || b) << endl;  // 1
    cout << !b << endl;        // 1
    cout << !a << endl;        // 0
    cout << !(a && b) << endl; // 1
    cout << !(a || b) << endl; // 0

    bool result;
    // result = NOT(5 > 6 or 7 == 7) and not (1 or false);
    result = !(5 > 6 || 7 == 7) && !(1 || 0);
    cout << "result: " << result << endl;

    return 0;
}