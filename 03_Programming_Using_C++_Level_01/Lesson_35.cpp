#include <iostream>
#include <string>
using namespace std;

int ifunction(int n1, int n2)
{
    return n1 + n2;
}

int main()
{
    cout << ifunction(1, 2) << endl;
    cout << ifunction(10, 20) << endl;
    cout << ifunction(100, 200) << endl;
    cout << ifunction(1000, 2000) << endl;
    cout << ifunction(-1, -2) << endl;

    int n1, n2;

    cout << "plz enter n1? \n";
    cin >> n1;
    cout << "plz enter n2? \n";
    cin >> n2;

    cout << ifunction(n1, n2) << endl;

    return 0;
}