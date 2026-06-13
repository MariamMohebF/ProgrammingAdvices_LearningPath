#include <iostream>
using namespace std;

int main()
{

    int time = 22;
    // int time = 9;
    // int time = 18;

    if (time < 10)
    {
        cout << "good moring" << endl;
    }
    else if (time < 20)
    {
        cout << "good day" << endl;
    }
    else
    {
        cout << "good evening" << endl;
    }
    return 0;
}