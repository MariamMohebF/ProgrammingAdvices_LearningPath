#pragma region // HW
// 1, 2
// 14, 15, 16, 18, 19
// 20, 21, 22, 23
// 31, 32
// 42, 43
#pragma endregion

#include <iostream>
#include <string>
#include <math.h>
using namespace std;

#pragma region // HW: 1

// void printname()
// {
//     cout << "your name is mora \n";
// }

// int main()
// {

//     printname();
//     return 0;
// }

#pragma endregion

#pragma region // HW: 2

// void askprintname()
// {
//     string name;

//     cout << "plz enter your name? \n";
//     cin >> name;

//     cout << "your name is " << name << endl;
// }

// int main()
// {
//     askprintname();
//     return 0;
// }

#pragma endregion

#pragma region // HW: 14

// void swapP()
// {
//     int n1, n2;

//     cout << "plz enter n1? \n";
//     cin >> n1;

//     cout << "plz enter n2? \n";
//     cin >> n2;

//     cout << "before swap n1: " << n1 << " n2: " << n2 << endl;

//     int temp = n1;
//     n1 = n2;
//     n2 = temp;

//     cout << "after  swap n1: " << n1 << " n2: " << n2 << endl;
// }

// int main()
// {
//     swapP();

//     return 0;
// }

#pragma endregion

#pragma region // HW: 15

// int calRectangelArea(int a, int b)
// {
//     int area = a * b;
//     return area;
// }

// int main()
// {
//     int a, b;

//     cout << "plz enter a? \n";
//     cin >> a;

//     cout << "plz enter b? \n";
//     cin >> b;

//     cout << "the rectangle area is " << calRectangelArea(a, b) << endl;

//     return 0;
// }

#pragma endregion

#pragma region // HW: 16

// float calRectangelDiagonalArea(float a, float d)
// {
//     float area = a * sqrt((d * d) - (a * a));
//     return area;
// }

// int main()
// {
//     float a, d;

//     cout << "plz enter a? \n";
//     cin >> a;

//     cout << "plz enter d? \n";
//     cin >> d;

//     cout << "the rectangle area through diagonal is " << calRectangelDiagonalArea(a, d) << endl;
//     cout << "the rectangle area through diagonal with round func is " << round(calRectangelDiagonalArea(a, d)) << endl;

//     return 0;
// }

#pragma endregion

#pragma region // HW: 18

// const float pi = 3.14;

// float calCircleArea(float r)
// {
//     float area = pi * pow(r, 2);
//     return area;
// }

// int main()
// {
//     float r;

//     cout << "plz enter r? \n";
//     cin >> r;

//     cout << "the circle area is " << calCircleArea(r) << endl;
//     cout << "the circle area rounded is " << round(calCircleArea(r)) << endl;

//     return 0;
// }

#pragma endregion

#pragma region // HW: 19

// const float pi = 3.14;

// float calCircleDilArea(float r)
// {
//     float area = (pi * pow(r, 2)) / 4;
//     return area;
// }

// int main()
// {
//     float d;

//     cout << "plz enter d? \n";
//     cin >> d;

//     cout << "the circle area through diameter is " << calCircleDilArea(d) << endl;
//     cout << "the circle area through diameter rounded is " << round(calCircleDilArea(d)) << endl;

//     return 0;
// }

#pragma endregion

#pragma region // HW: 20

// const float pi = 3.14;

// float calCircleInSquareArea(float a)
// {
//     float area = (pi * pow(a, 2)) / 4;
//     return area;
// }

// int main()
// {
//     float a;

//     cout << "plz enter a? \n";
//     cin >> a;

//     cout << "the circle area in square is " << calCircleInSquareArea(a) << endl;
//     cout << "the circle area in square rounded is " << round(calCircleInSquareArea(a)) << endl;

//     return 0;
// }

#pragma endregion

#pragma region // HW: 21

// const float pi = 3.14;

// float calCirclelArea(float l)
// {
//     float area = pow(l, 2) / (4 * pi);
//     return area;
// }

// int main()
// {
//     float l;

//     cout << "plz enter l? \n";
//     cin >> l;

//     cout << "the circle area is " << calCirclelArea(l) << endl;
//     cout << "the circle area rounded is " << round(calCirclelArea(l)) << endl;
//     return 0;
// }

#pragma endregion

#pragma region // HW: 22

// const float pi = 3.14;

// float calCircleInTrianglelArea(float a, float b)
// {
//     float area = pi * (pow(b, 2) / 4) * ((2 * a - b) / (2 * a + b));
//     return area;
// }

// int main()
// {
//     float a, b;

//     cout << "plz enter a? \n";
//     cin >> a;

//     cout << "plz enter b? \n";
//     cin >> b;

//     cout << "the circle area in triangle is " << calCircleInTrianglelArea(a, b) << endl;
//     cout << "the circle area in triangle rounded is " << round(calCircleInTrianglelArea(a, b)) << endl;

//     return 0;
// }

#pragma endregion

#pragma region // HW: 23

// const float pi = 3.14;

// float calACirclelArea(float a, float b, float c)
// {

//     float p = (a + b + c) / 2;
//     float PartialArea = (a * b * c) / (4 * sqrt(p * (p - a) * (p - b) * (p - c)));
//     float area = pi * pow(PartialArea, 2);
//     return area;
// }

// int main()
// {
//     float a, b, c;

//     cout << "plz enter a? \n";
//     cin >> a;

//     cout << "plz enter b? \n";
//     cin >> b;

//     cout << "plz enter c? \n";
//     cin >> c;

//     cout << "the circle arbitrary triangle is " << calACirclelArea(a, b, c) << endl;
//     cout << "the circle arbitrary triangle rounded is " << round(calACirclelArea(a, b, c)) << endl;

//     return 0;
// }

#pragma endregion

#pragma region // HW: 31

// void powerOfNumber()
// {
//     int n;

//     cout << "plz enter n? \n";
//     cin >> n;

//     cout << "the power of number^2 " << n << " is " << n * n << endl;
//     cout << "the power of number^3 " << n << " is " << n * n * n << endl;
//     cout << "the power of number^4 " << n << " is " << n * n * n * n << endl;
// }

// int main()
// {
//     powerOfNumber();
//     return 0;
// }

#pragma endregion

#pragma region // HW: 32

// int powerOfnumberM(int n, int m)
// {
//     int result = pow (n, m);
//     return result;
// }

// int main()
// {
//     int n, m;

//     cout << "plz enter n? \n";
//     cin >> n;

//     cout << "plz enter m? \n";
//     cin >> m;

//     cout << "the power of number " << n << " of " << m << " is " << powerOfnumberM(n,m) << endl;

//     return 0;
// }

#pragma endregion

#pragma region // HW: 42

// int taskInSeconds(int days, int hours, int minutes, int seconds)
// {
//     int task = (days * 24 * 60 * 60) + (hours * 60 * 60) + (minutes * 60) + seconds;
//     return task;
// }

// int main()
// {
//     int days, hours, minutes, seconds;

//     cout << "plz enter task in days? \n";
//     cin >> days;

//     cout << "plz enter task in hours? \n";
//     cin >> hours;

//     cout << "plz enter task in minutes? \n";
//     cin >> minutes;

//     cout << "plz enter task in seconds? \n";
//     cin >> seconds;

//     cout << "the task in all seconds is " << taskInSeconds(days, hours, minutes, seconds) << endl;

//     return 0;
// }

#pragma endregion

#pragma region // HW: 43

// void task()
// {
//     int Tseconds;

//     cout << "plz enter seconds? \n";
//     cin >> Tseconds;

//     int d = 24 * 60 * 60;
//     int h = 60 * 60;
//     int m = 60;

//     int days = floor(Tseconds / d);
//     int remain = Tseconds % d;
//     int hours = floor(remain / h);
//     remain = remain % h;
//     int minutes = floor(remain / m);
//     remain = remain % m;
//     int seconds = remain;

//     cout << "the task: " << days << " days" << endl;
//     cout << "the task: " << hours << " hours" << endl;
//     cout << "the task: " << minutes << " minutes" << endl;
//     cout << "the task: " << seconds << " seconds" << endl;
// }

// int main()
// {
//     task();
//     return 0;
// }

#pragma endregion
