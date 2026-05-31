#include <iostream>
using namespace std;

int main()
{
	int a = 10, b = 20;
	cout << "a + b = " << a + b << endl; // 30
	cout << "a - b = " << a - b << endl; // 10
	cout << "a * b = " << a * b << endl; // 200
	cout << "a / b = " << a / b << endl; // 0 -> because it is less than 0
	cout << "a % b = " << a % b << endl; // 10 -> because 10 can not be divided by 20 so 10 will reamin

	return 0;
}