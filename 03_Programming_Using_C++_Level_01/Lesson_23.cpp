#include <iostream>
using namespace std;

int main()
{

	int a = 10, b = 20;

	a += b; // a = 10+20 = 30  // b= 20
	cout << "a = " << a << ",  b = " << b << endl;

	a -= b; // a = 30-20 = 10  // b= 20
	cout << "a = " << a << ",  b = " << b << endl;

	a *= b; // a = 10*20 = 200 // b= 20
	cout << "a = " << a << ", b = " << b << endl;

	a /= b; // a = 200/20 = 10 // b= 20
	cout << "a = " << a << ",  b = " << b << endl;

	a %= b; // a = 10%20 = 10 // b= 20
	cout << "a = " << a << ",  b = " << b << endl;

	return 0;
}
