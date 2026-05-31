#pragma region // HW
// 16, 18, 19
// 20, 21, 22, 23
// 31, 32
// 42, 43
#pragma endregion

#include <iostream>
#include <math.h>
using namespace std;

int main()
{

#pragma region // 16 using pow inside sqrt

    // float a, d;

    // cout << "plz enter a? \n";
    // cin >> a;

    // cout << "plz enter d? \n";
    // cin >> d;

    // float rectanglearea = a * sqrt(pow(d, 2) - pow(a, 2));

    // cout << "the rectangle area is " << rectanglearea << endl;

#pragma endregion

#pragma region // 18 // ceiling the result

    // float r;
    // const float pi = 3.14;

    // cout << "plz enter r? \n";
    // cin >> r;

    // float circlearea = pi * pow(r, 2);

    // cout << "the circle area is " << ceil(circlearea) << endl;

#pragma endregion

#pragma region // 19 // ceiling the result

    // float diameter;
    // const float pi = 3.14;

    // cout << "plz enter d? \n";
    // cin >> diameter;

    // float circleDarea = (pi * pow(diameter, 2)) / 4;

    // cout << "the circle area through diameter is " << ceil(circleDarea) << endl;

#pragma endregion

#pragma region // 20 // ceiling the result

    // float A;
    // const float pi = 3.14;

    // cout << "plz enter A? \n";
    // cin >> A;

    // float circleNarea = (pi * pow(A,2)) / 4;

    // cout << "the circle in square area is " << ceil(circleNarea) << endl;

#pragma endregion

#pragma region // 21 // floor the result

    // float l;
    // const float pi = 3.14;

    // cout << "plz enter l? \n";
    // cin >> l;

    // float carea = pow(l, 2) / (4 * pi);

    // cout << "the circle area is " << floor(carea) << endl;

#pragma endregion

#pragma region // 22 // floor the result

    // float a, b;
    // const float pi = 3.14;

    // cout << "plz enter a? \n";
    // cin >> a;

    // cout << "plz enter b? \n";
    // cin >> b;

    // float circletarea = pi * (pow(b, 2) / 4) * ((2 * a - b) / (2 * a + b));

    // cout << "the circle in triagnle area is " << floor(circletarea) << endl;

#pragma endregion

#pragma region // 23 // round the result

    // int a, b, c;
    // const float pi = 3.14;

    // cout << "plz enter a? \n";
    // cin >> a;

    // cout << "plz enter b? \n";
    // cin >> b;

    // cout << "plz enter c? \n";
    // cin >> c;

    // float p = (a + b + c) / 2;

    // float circleaarea1 = ((a * b * c) / (4 * sqrt(p * (p - a) * (p - b) * (p - c))));

    // float circleaarea = pi * pow(circleaarea1, 2);

    // cout << "the circle in arbitrary triangle is " << round(circleaarea) << endl;

    // // float all = pi * pow(((a * b * c) / (4 * sqrt(p * (p - a) * (p - b) * (p - c)))), 2);
    // // cout << round(all) << endl;

#pragma endregion

#pragma region // 31 // round the result

    // int n;

    // cout << "plz enter n? \n";
    // cin >> n;

    // cout << "the result of pow of (2) is " << round(pow(n, 2)) << endl;
    // cout << "the result of pow of (3) is " << round(pow(n, 3)) << endl;
    // cout << "the result of pow of (4) is " << round(pow(n, 4)) << endl;

#pragma endregion

#pragma region // 32 // round the result

    // int n, m;

    // cout << "plz enter n? \n";
    // cin >> n;

    // cout << "plz enter m? \n";
    // cin >> m;

    // int result = pow(n, m);
    // cout << "the power of number " << n << " of " << m << " is " << round(result) << endl;

#pragma endregion

#pragma region // 42 // round the result

    // int days, hours, minutes, seconds;

    // cout << "plz enter task in days? \n";
    // cin >> days;

    // cout << "plz enter task in hours? \n";
    // cin >> hours;

    // cout << "plz enter task in minutes? \n";
    // cin >> minutes;

    // cout << "plz enter task in seconds? \n";
    // cin >> seconds;

    // float taskNseconds = (days * 24 * 60 * 60) + (hours * 60 * 60) + (minutes * 60) + seconds;
    // cout << "the task in seconds is " << round(taskNseconds) << endl;

#pragma endregion

#pragma region // 43 // round the result

    // int task;

    // cout << "plz enter the task in seconds? \n";
    // cin >> task;

    // int d = 24 * 60 * 60;
    // int h = 60 * 60;
    // int m = 60;

    // int days = floor(task / d);
    // int remain = task % d;
    // int hours = floor(remain / h);
    // remain = remain % h;
    // int minutes = floor(remain / m);
    // remain = remain % m;
    // int seconds = remain;

    // cout << "task is in " << days << " days " << endl;
    // cout << "task is in " << hours << " hours " << endl;
    // cout << "task is in " << minutes << " minutes " << endl;
    // cout << "task is in " << seconds << " seconds " << endl;

#pragma endregion

    return 0;
}