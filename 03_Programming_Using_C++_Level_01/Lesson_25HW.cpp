#include <iostream>
using namespace std;

int main()
{
#pragma region
    // column 1
    //---------

    //(12 >= 12)
    cout << (12 >= 12) << endl; // 1

    //(12 > 7)
    cout << (12 > 7) << endl; // 1

    //(8 < 6)
    cout << (8 < 6) << endl; // 0

    //(8 = 8)
    cout << (8 == 8) << endl; // 1

    //(12 <= 12)
    cout << (12 <= 12) << endl; // 1

    //(7 = 5)
    cout << (7 == 5) << endl
         << endl; // 0

    //------------------------------------
    // column 2
    //---------

    // not (12 >= 12)
    cout << !(12 >= 12) << endl; // 0

    // not (12 > 7)
    cout << !(12 > 7) << endl; // 0

    // not (8 < 6)
    cout << !(8 < 6) << endl; // 1

    // not (8 = 8)
    cout << !(8 == 8) << endl; // 0

    // not (12 <= 12)
    cout << !(12 <= 12) << endl; // 0

    // not (7 = 5)
    cout << !(7 == 5) << endl
         << endl; // 1

    //------------------------------------
    // column 3
    //---------
    // 1 and 1
    cout << (1 && 1) << endl; // 1

    // true and 0
    cout << (1 && 0) << endl; // 0

    // 0 or 1
    cout << (0 || 1) << endl; // 1

    // 0 or 0
    cout << (0 || 0) << endl; // 0

    // not 0
    cout << !(0) << endl; // 1

    // not (1 or 0)
    cout << !(1 || 0) << endl
         << endl; // 0

    //------------------------------------
    // column 4
    //---------

    // (7 = 7) and (7 > 5)
    cout << ((7 == 7) && (7 > 5)) << endl; // 1

    // (7 = 7) and (7 < 5)
    cout << ((7 == 7) && (7 < 5)) << endl; // 0

    // (7 = 7) or (7 < 5)
    cout << ((7 == 7) || (7 < 5)) << endl; // 1

    // (7 < 7) or (7 > 5)
    cout << ((7 < 7) || (7 > 5)) << endl; // 1

    // not (7 = 7) and (7 > 5)
    cout << (!(7 == 7) && (7 > 5)) << endl; // 0

    // (7 =7) and not (7 < 5)
    cout << ((7 == 7) && !(7 < 5)) << endl
         << endl; // 1

    //------------------------------------
    // column 5
    //---------

    // (5 > 6 and 7 =7 ) or (1 or 0)
    cout << ((5 > 6 && 7 == 7) || (1 || 0)) << endl; // 1

    // not(5 > 6 and 7 =7 ) or (1 or 0)
    cout << (!(5 > 6 && 7 == 7) || (1 || 0)) << endl; // 1

    // not(5 > 6 and 7 == 7 ) or not (1 or 0)
    cout << (!(5 > 6 && 7 == 7) || !(1 || 0)) << endl; // 1

    // not(5 > 6 or 7 =7) and not (1 or 0)
    cout << (!(5 > 6 || 7 == 7) && !(1 || 0)) << endl; // 0

    // ((5 > 6 and 7 <=8) or (8 > 1 and 4 <= 3)) and true
    cout << (((5 > 6 && 7 <= 8) || (8 > 1 && 4 <= 3)) && true) << endl; // 0

    // ((5 > 6 and not (7 <=8 )) and (8 > 1 or 4 <= 3)) or true
    cout << (((5 > 6 && !(7 <= 8)) && (8 > 1 || 4 <= 3)) || true) << endl; // 1

#pragma endregion

    return 0;
}