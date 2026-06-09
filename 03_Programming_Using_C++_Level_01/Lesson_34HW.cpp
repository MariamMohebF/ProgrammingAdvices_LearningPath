#include <iostream>
using namespace std;
#pragma region // Procedure
void mySumProcedure()
{
    int n1, n2;

    cout << "plz enter number 1? \n";
    cin >> n1;

    cout << "plz enter number 2? \n";
    cin >> n2;

    cout << "**************************\n";
    cout << n1 + n2 << endl;
    // or
    // int sum = n1 + n2;
    // cout << sum << endl;
}
#pragma endregion

#pragma region // Function
int mySumFunction()
{
    int n1, n2;

    cout << "plz enter number 1? \n";
    cin >> n1;

    cout << "plz enter number 2? \n";
    cin >> n2;

    int sum = n1 + n2;
    cout << "**************************\n";

    return sum;
}
#pragma endregion

int main()
{
    mySumProcedure();

    cout << mySumFunction() << endl;
    // or
    // int sum = mySumFunction();
    // cout << mySumFunction();

    cout << mySumFunction() * 10 / 20 << endl;

    return 0;
}