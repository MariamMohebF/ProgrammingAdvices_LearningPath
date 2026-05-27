// Are the following valid variable names and Why?

#pragma region
// Age               Yes
// My-Age            No      No symbols -
// My_Age            Yes
//_Age              Yes
// 2x                No      No satrting with numbers
// X2                Yes
// My Name           No      No spaces
// MyName            Yes
// #Name             No      No symbols #
//$Name             No      No symbols $
// N@me              No      No symbols @
// int               No      reserved words
// float             No      reserved words
#pragma endregion

//=========================================================

#include <iostream>
using namespace std;

int main()
{

    cout << "--------------------------------------------------------" << endl;

#pragma region

    string Name = "Mariam Moheb";
    int Age = 34;
    string City = "Sohag";
    string Country = "Egypt";
    float MonthlySalary = 5000;
    float YearlySalary = 12 * MonthlySalary;
    char Gender = 'F';
    bool Married = true;

    cout << "*******************************" << endl;
    cout << "Name : " << Name << endl;
    cout << "Age : " << Age << endl;
    cout << "City : " << City << endl;
    cout << "Country : " << Country << endl;
    cout << "Monthly Salary : " << MonthlySalary << endl;
    cout << "Yearly Salary : " << YearlySalary << endl;
    cout << "Gender : " << Gender << endl;
    cout << "Married : " << Married << endl;
    cout << "*******************************" << endl;

#pragma endregion

    cout << "--------------------------------------------------------" << endl;

#pragma region

    int x = 20, y = 30, z = 10;
    int Total = x + y + z;

    cout << x << " + " << endl;
    cout << y << " + " << endl;
    cout << z << endl;
    cout << "---------------" << endl;
    cout << "Total = " << Total << endl;

#pragma endregion

    cout << "--------------------------------------------------------" << endl;

#pragma region

    int age = 25, ageafter5years = 5 + age;

    cout << "After 5 years you will be " << ageafter5years << " years old." << endl;

#pragma endregion

    cout << "--------------------------------------------------------" << endl;

    return 0;
}