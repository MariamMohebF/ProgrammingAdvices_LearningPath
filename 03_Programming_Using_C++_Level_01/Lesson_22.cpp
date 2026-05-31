#include <iostream>
using namespace std;

int main()
{
	int a = 10;
	int b = a++;

	cout << "a = " << a << endl; // 11
	cout << "b = " << b << endl; // 10

	b = ++a;

	cout << "a = " << a << endl; // 12
	cout << "b = " << b << endl; // 12

	return 0;
}