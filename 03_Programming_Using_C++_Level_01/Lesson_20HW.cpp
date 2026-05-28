#pragma region // P-HW:
// HW:
//  7, 9, 10,
//  14, 15, 17, 19,
//  20, 21, 22,
//  31, 35, 39,
//  40, 42, 43, 47, 48
#pragma endregion

#include <iostream>
#include <math.h>
using namespace std;

int main()
{

#pragma region // P 00

    // int a, b;

    // cout << "plz enter the first number a?" << endl;
    // cin >> a;

    // cout << "plz enter the second number b?" << endl;
    // cin >> b;

    // cout << "a + b = " << a + b << endl;
    // cout << "a - b = " << a - b << endl;
    // cout << "a * b = " << a * b << endl;
    // cout << "a / b = " << a / b << endl;
    // cout << "a % b = " << a % b << endl;

#pragma endregion

#pragma region // P 07

    // int n;

    // cout << "plz enter number?" << endl;
    // cin >> n;

    // cout << "Half of " << n << " is " << n / 2 << endl;

#pragma endregion

#pragma region // P 09

    // int n1, n2, n3;

    // cout << "plz enter n1? \n";
    // cin >> n1;

    // cout << "plz enter n2? \n";
    // cin >> n2;

    // cout << "plz enter n3? \n";
    // cin >> n3;

    // cout << "the sum of the entered numbers is: " << n1 + n2 + n3 << endl;

#pragma endregion

#pragma region // P 10

    // int mark1, mark2, mark3;

    // cout << "plz enter mark1? \n";
    // cin >> mark1;

    // cout << "plz enter mark2? \n";
    // cin >> mark2;

    // cout << "plz enter mark3? \n";
    // cin >> mark3;

    // cout << "the avrage of the enterd marks is: "
    //      << (mark1 + mark2 + mark3) / 3 << endl;

#pragma endregion

#pragma region // P 14

    // int n1, n2;

    // cout << "plz enter n1? \n";
    // cin >> n1;

    // cout << "plz enter n2? \n";
    // cin >> n2;

    // cout << "before the swap n1 = " << n1 << " n2 = " << n2 << endl;

    // int temp;
    // temp = n1;
    // n1 = n2;
    // n2 = temp;

    // cout << "after  the swap n1 = " << n1 << " n2 = " << n2 << endl;

#pragma endregion

#pragma region // P 15

    // int a, b;

    // cout << "plz enter a? \n";
    // cin >> a;

    // cout << "plz enter b? \n";
    // cin >> b;

    // cout << "the rectangle area = " << a * b;

#pragma endregion

#pragma region // P 17

    // int a, h;

    // cout << "plz enter a? \n";
    // cin >> a;

    // cout << "plz enter h? \n";
    // cin >> h;

    // cout << "the triangle area = " << (a * h) / 2;

#pragma endregion

#pragma region // P 19

    // int d;
    // const float pi = 3.14;

    // cout << "plz enter d? \n";
    // cin >> d;

    // cout << "the circle area = " << (pi * d * d) / 4 << endl;

#pragma endregion

#pragma region // P 20

    // int a;
    // const float pi = 3.14;

    // cout << "plz enter a? \n";
    // cin >> a;

    // float area = (pi * a * a) / 4;

    // cout << "the circle area = " << area << endl;

#pragma endregion

#pragma region // P 21

    // int l;
    // const float pi = 3.14;

    // cout << "plz enter l? \n";
    // cin >> l;

    // float area = (l * l) / (4 * pi);
    // cout << "the circle area = " << area << endl;

#pragma endregion

#pragma region // P 22

    // -------------------------------------------------- VIP NOTE
    // can not use (int a, b)
    //  -> Integer division is wrong because 30/50 = 0
    //  -> float   division is right
    // --------------------------------------------------

    // float a, b;
    // const float pi = 3.14;

    // cout << "plz enter a? \n";
    // cin >> a;

    // cout << "plz enter b? \n";
    // cin >> b;

    // float area = ((pi * b * b) / 4) * ((2 * a - b) / (2 * a + b));

    // cout << "the Circle area = " << area << endl;

#pragma endregion

#pragma region // P 31

    // int n;

    // cout << "plz enter n? \n";
    // cin >> n;

    // cout << "the number^2 is " << n * n << endl;
    // cout << "the number^3 is " << n * n * n << endl;
    // cout << "the number^4 is " << n * n * n * n << endl;

#pragma endregion

#pragma region // P 35

    // float penny, nickel, dime, quarter, dollar;

    // cout << "plz enter penny? \n";
    // cin >> penny;

    // cout << "plz enter nickel? \n";
    // cin >> nickel;

    // cout << "plz enter dime? \n";
    // cin >> dime;

    // cout << "plz enter quarter? \n";
    // cin >> quarter;

    // cout << "plz enter dollar? \n";
    // cin >> dollar;

    // float pennies = 1 * penny;
    // float nickels = 5 * nickel;
    // float dimes = 10 * dime;
    // float quarters = 25 * quarter;
    // float dollars = 100 * dollar;

    // float totalPennies = pennies + nickels + dimes + quarters + dollars;
    // float totalDollars = totalPennies / 100;

    // cout << "the total dollar is " << totalDollars;

#pragma endregion

#pragma region // P 39

    // float nOfHours;

    // cout << "plz enter nOfHours? \n";
    // cin >> nOfHours;

    // float nOfWeeks = nOfHours / (7 * 24);
    // float nOfDays = nOfHours / 24;
    // cout << "the number of weeks is " << nOfWeeks << " weeks." << endl;
    // cout << "the number of  days is " << nOfDays << " days." << endl;

#pragma endregion

#pragma region // P 40

    // float billValue, serviceFee, salesTaxes, totalbill;

    // cout << "plz enter bill value? \n";
    // cin >> billValue;

    // serviceFee = 0.1 * billValue;
    // salesTaxes = 0.16 * (serviceFee + billValue);

    // totalbill = billValue + serviceFee + salesTaxes;

    // cout << "the total bill is " << totalbill << endl;

#pragma endregion

#pragma region // P 42

    // int taskDuration, days, hours, minutes, seconds;

    // cout << "plz enter task in days? \n";
    // cin >> days;

    // cout << "plz enter task in hours? \n";
    // cin >> hours;

    // cout << "plz enter task in minutes? \n";
    // cin >> minutes;

    // cout << "plz enter task in seconds? \n";
    // cin >> seconds;

    // taskDuration = (days * 24 * 60 * 60) + (hours * 60 * 60) + (minutes * 60) + seconds;

    // cout << "the task duration in seconds is: " << taskDuration << endl;

#pragma endregion

#pragma region // P 43

    // float total;

    // cout << "plz enter of number of seconds? \n";
    // cin >> total;

    // int d = 24 * 60 * 60;
    // int h = 60 * 60;
    // int m = 60;

    // float days = total / d;
    // days = floor(days);
    // float remain = fmod(total, d);
    // float hours = remain / h;
    // hours = floor(hours);
    // remain = fmod(remain, h);
    // float minutes = remain / m;
    // minutes = floor(minutes);
    // remain = fmod(remain, m);
    // float seconds = remain;

    // cout << "the task takes " << days << " days" << endl;
    // cout << "the task takes " << hours << " hours" << endl;
    // cout << "the task takes " << minutes << " minutes" << endl;
    // cout << "the task takes " << seconds << " seconds" << endl;

#pragma endregion

#pragma region // P 47

    // float LoanAmount, MonthlyPayment;

    // cout << "plz enter loan amount? \n";
    // cin >> LoanAmount;

    // cout << "plz enter monthly payment? \n";
    // cin >> MonthlyPayment;

    // float monthes = LoanAmount / MonthlyPayment;

    // cout << "monthes you need to settle the loan " << monthes << endl;

#pragma endregion

#pragma region // P 48

    // float loanAmount, months;

    // cout << "plz enter loan amonunt? \n";
    // cin >> loanAmount;

    // cout << "plz enter number of months? \n";
    // cin >> months;

    // float settleMonth = loanAmount / months;

    // cout << "settle month " << settleMonth;

#pragma endregion

    return 0;
}