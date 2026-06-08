#include <iostream>
#include <string>
using namespace std;

int main()
{
    string fullname, s1, s2;

    cout << "plz enter your full name? \n";
    getline(cin, fullname);

    cout << "plz enter your string 1? \n";
    cin >> s1;

    cout << "plz enter your string 2? \n";
    cin >> s2;

    cout << "**********************************\n";

    cout << "the length of string1 is: " << fullname.length() << endl
         << endl;

    cout << "the characters of 0, 2, 4, 7 are: " << fullname[0] << fullname[2] << fullname[4] << fullname[7] << endl
         << endl;

    cout << "concateating string 1 and string 2 = " << s1 + s2 << endl
         << endl;

    cout << stoi(s1) << " * " << stoi(s2) << " = " << stoi(s1) * stoi(s2) << endl
         << endl;
    // or
    int result = stoi(s1) * stoi(s2);
    cout << s1 << " * " << s2 << " = " << result << endl
         << endl;

    return 0;
}