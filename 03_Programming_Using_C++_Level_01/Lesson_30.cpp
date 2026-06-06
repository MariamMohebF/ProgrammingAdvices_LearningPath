#include <iostream>
#include <string>
using namespace std;

int main()
{
    // 3 ways of casting:
    //-------------------
    // implicit
    // explicit -> c style
    // explicit -> function

    int num1;
    double num2 = 18.99;

    num1 = num2; // impllict
    cout << "impllict int to double: " << num1 << endl;

    num1 = (int)num2; // explicit -> c style
    cout << "explicit in c style int to double: " << num1 << endl;

    num1 = int(num2); // explicit -> function
    cout << "impllict  in function style int to double: " << num1 << endl;

    //--------------------------------------
    // explicit -> c style:
    //---------------------
    double n = 33.77777777777;

    float fn = (float)n;
    cout << "explicit double to float: " << fn << endl;

    int dn = (int)n;
    cout << "explicit double to int: " << dn << endl;

    // string sn = (string)n; // error
    // cout << sn << endl;

    //-------------------------------------
    // explict -> function: string -> int/float/double
    //-------------------------------------------------

    string str = "123.4567890";

    int num_str = stoi(str);     // string -> int
    float flo_str = stof(str);   // string -> float
    double doub_str = stod(str); // string -> double

    cout << "string to int: " << num_str << endl;
    cout << "string to float: " << flo_str << endl;
    cout << "string to double: " << doub_str << endl;

    //-------------------------------------
    // explict -> function: int/float/double -> string
    //-------------------------------------------------

    int i = 123;
    float f = 5.6;
    double d = 18.99;

    string sti, stf, std;

    sti = to_string(i);
    stf = to_string(f);
    std = to_string(d);

    cout << "string to int: " << sti << endl;
    cout << "string to float: " << stf << endl;
    cout << "string to double: " << std << endl;

    return 0;
}