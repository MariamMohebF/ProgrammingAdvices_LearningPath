#include <iostream>
using namespace std;

#pragma region // wrong solution of swap function
// void swapP(int n1, int n2)
// {
//     int temp = n1;
//     n1 = n2;
//     n2 = temp;

//     cout << "the value after swap in swap func of n1: " << n1 << " n2: " << n2 << endl;
// }

// int main()
// {
//     int n1, n2;

//     cout << "plz enter n1? \n";
//     cin >> n1;

//     cout << "plz enter n2? \n";
//     cin >> n2;

//     cout << "the value before swap of n1: " << n1 << " n2: " << n2 << endl;
//     swapP(n1, n2);
//     cout << "the value after swap in main func n1: " << n1 << " n2: " << n2 << endl;

//     return 0;
// }
#pragma endregion

#pragma region // right solution of swap function
// void swapP(int &n1, int &n2)
// {
//     int temp = n1;
//     n1 = n2;
//     n2 = temp;

//     cout << "the value after swap in swap func of n1: " << n1 << " n2: " << n2 << endl;
// }

// int main()
// {
//     int n1, n2;

//     cout << "plz enter n1? \n";
//     cin >> n1;

//     cout << "plz enter n2? \n";
//     cin >> n2;

//     cout << "the value before swap of n1: " << n1 << " n2: " << n2 << endl;
//     swapP(n1, n2);
//     cout << "the value after swap in main func n1: " << n1 << " n2: " << n2 << endl;

//     return 0;
// }
#pragma endregion