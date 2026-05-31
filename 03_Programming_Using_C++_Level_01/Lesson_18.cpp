#include <iostream>
using namespace std;

int main()
{
#pragma region // Wrong
    char myc;
    int myn;

    cin >> myc;
    cin >> myn;

    cout << "You entered char: " << myc << " and number: " << myn << endl;
#pragma endregion

#pragma region // right
    char mychar;
    int mynumber;

    cout << "Please enter a Char?" << endl;
    cin >> mychar;

    cout << "Pleade enter a Number?" << endl;
    cin >> mynumber;

    cout << "You entered char: " << mychar << " and number: " << mynumber << endl;
#pragma endregion
    return 0;
}