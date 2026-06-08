#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s = "abcdefghijklmnopqrstuvwxyz";
    cout << "the length of the string is  " << s.length() << endl;

    cout << "the thired char in string is " << s[2] << endl;
    cout << "the eleventh char in string is  " << s[10] << endl;

    string s1 = "10", s2 = "50";
    string s4 = "ab", s5 = "cd";

    string s3 = s1 + s2; // concatenation  1050
    string s6 = s4 + s5; // concatenation  abcd

    cout << "concat s1 + s2 is: " << s3 << endl;
    cout << "concat s3 + s4 is:  " << s6 << endl;

    // sum based on casting chars -> to -> int
    int sum = stoi(s1) + stoi(s2);

    // error -> must be numbers - to cast it from string to int - ab to num -> error
    //  int sum = stoi(s4) + stoi(s5);

    cout << "after casting s1 & s2 the sum is: " << sum << endl;
    //------------------------------------------------------------------
    // Reading string with spaces:-
    //----------------------------

    // cin read till frist space only
    string fullname;
    cin >> fullname;          // mora moheb
    cout << fullname << endl; // mora

    string Yourfullname;
    cin >> Yourfullname;        // mora moheb
    getline(cin, Yourfullname); // mora moheb

    return 0;
}