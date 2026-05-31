#include <iostream>
using namespace std;

int main()
{

    cout << "\n--------------------------------------------------------\n";

#pragma region

    string name;
    int age;
    string city;
    string Country;
    int monthlySalary;
    char gender;
    bool isMarried;

    cout << "Plz enter Name" << endl;
    cin >> name;

    cout << "Plz enter Age" << endl;
    cin >> age;

    cout << "Plz enter City" << endl;
    cin >> city;

    cout << "Plz enter Country" << endl;
    cin >> Country;

    cout << "Plz enter MonthlySalary" << endl;
    cin >> monthlySalary;

    cout << "Plz enter Gender" << endl;
    cin >> gender;

    cout << "Plz enter Married" << endl;
    cin >> isMarried;

    cout << "*****************************" << endl;
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "City: " << city << endl;
    cout << "Country: " << Country << endl;
    cout << "MonthlySalary: " << monthlySalary << endl;
    cout << "YearlylySalary: " << monthlySalary * 12 << endl;
    cout << "Gender: " << gender << endl;
    cout << "Married: " << isMarried << endl;
    cout << "*****************************" << endl;

#pragma endregion

    cout << "\n--------------------------------------------------------\n";

#pragma region

    int n1, n2, n3;

    cout << "plz enter n1" << endl;
    cin >> n1;

    cout << "plz enter n2" << endl;
    cin >> n2;

    cout << "plz enter n3" << endl;
    cin >> n3;

    int sum = n1 + n2 + n3;

    cout << n1 << " +" << endl;
    cout << n2 << " +" << endl;
    cout << n3 << endl;
    cout << "---------------" << endl;
    cout << "Total = " << sum << endl;
    // or
    // cout << n1 + n2 + n3 << endl;

#pragma endregion

    cout << "\n--------------------------------------------------------\n";

#pragma region

    int yourAgeNow, ageafter5years = 5 + yourAgeNow;
    ;

    cout << "plz enter your age \n";
    cin >> yourAgeNow;

    cout << "After 5 years you will be " << yourAgeNow + 5 << " years old." << endl;
    // or
    // cout << "After 5 years you will be " << ageafter5years << " years old." << endl;

#pragma endregion

    cout << "\n--------------------------------------------------------\n";

    return 0;
}