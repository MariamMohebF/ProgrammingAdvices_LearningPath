#include <iostream>
using namespace std;

int main()
{
    int num;
    string name;
    string country;

    cout << "Please enter emplyee num?" << endl;
    cin >> num;

    cout << "Please enter Name?" << endl;
    cin.ignore(1, '\n');
    getline(cin, name);

    cout << "Please enter country?" << endl;
    cin >> country;

    cout << "number " << num << " Name " << name << " country " << country << endl;

    return 0;
}