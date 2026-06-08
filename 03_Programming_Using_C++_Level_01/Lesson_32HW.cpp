
#include <iostream>
using namespace std;

#pragma region // task 1 print info
void printinfo()
{
    string name = "Mora Moheb";
    int age = 33;
    string city = "Sohag";
    string Country = "Egypt";
    int monthlySalary = 5000;
    char gender = 'f';
    bool isMarried = true;

    cout << "*****************************" << endl;
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "City: " << city << endl;
    cout << "Country: " << Country << endl;
    cout << "MonthlySalary: " << monthlySalary << endl;
    cout << "YearlylySalary: " << monthlySalary * 12 << endl;
    cout << "Gender: " << gender << endl;
    cout << "Married: " << isMarried << endl;
    cout << "*****************************" << endl
         << endl;
}
#pragma endregion

#pragma region // task 2 print stars
void printstars()
{
    cout << "**************\n";
    cout << "**************\n";
    cout << "**************\n";
    cout << "**************\n\n";
}
#pragma endregion

#pragma region // task 3 i love programming
void printiloveprogramming()
{
    cout << "i love programmming!\n\n";
    cout << "i promise to be the beat developer ever\n\n";
    cout << "i know it will take some time to parctice, but i will achieve my goal\n";
    cout << "best regardes\n\n";
    cout << "Mora Moheb\n\n\n";
}
#pragma endregion

#pragma region // task 4 print H
void printh()
{
    cout << "*         *\n";
    cout << "*         *\n";
    cout << "***********\n";
    cout << "*         *\n";
    cout << "*         *\n";
}
#pragma endregion

int main()
{
    printinfo();
    printstars();
    printiloveprogramming();
    printh();
    return 0;
}