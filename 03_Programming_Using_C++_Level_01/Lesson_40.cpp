#include <iostream>
using namespace std;

void readarraydata(int x[3])
{
    cout << "plz enter number 1? \n";
    cin >> x[0];

    cout << "plz enter number 2? \n";
    cin >> x[1];

    cout << "plz enter number 3? \n";
    cin >> x[2];
}

void printarraydata(int x[3])
{
    cout << "\n**************************\n";
    cout << x[0] << endl;
    cout << x[1] << endl;
    cout << x[2] << endl;
}

int main()
{
    int x[3];

    readarraydata(x);
    printarraydata(x);

    return 0;
}