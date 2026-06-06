#include <iostream>
#include <string>
using namespace std;

int main()
{

#pragma region // task:1 - convert string st1 = "43.22" to double, float, int

    string st1 = "43.22";

    double st1_d = stod(st1);
    cout << "string to double: " << st1_d << endl;

    float st1_f = stof(st1);
    cout << "string to float: " << st1_f << endl;

    int st1_i = stoi(st1);
    cout << "string to int: " << st1_i << endl;

#pragma endregion

#pragma region // task:2 - convert integer n1 20 to string

    int n1 = 20;

    string int_str = to_string(n1);
    cout << "int to string: " << int_str << endl;

#pragma endregion

#pragma region // task:2 - convert double n2 33.5 to string

    double n2 = 33.5;

    string d_str = to_string(n2);
    cout << "double to string: " << d_str << endl;

#pragma endregion

#pragma region // task:2 - convert float n3 55.23 to string & integer

    float n3 = 55.23;

    string f_str = to_string(n3);
    cout << "float to string: " << f_str << endl;

    int f_int = int(n3);
    cout << "float to int: " << f_int << endl;

#pragma endregion

    return 0;
}