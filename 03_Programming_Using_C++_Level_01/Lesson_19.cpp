#include <iostream>
#include <float.h>
using namespace std;

int main()
{
     int v1;
     signed int v2;

     short int v4;
     short v5;

     unsigned short int v6;
     unsigned short v7;

     signed long int v8;
     long int v9;
     long v10;

     unsigned long v11;

     long long int v12;

     unsigned long long v13;

     long double v14;

     signed char v15;
     char v16;

     unsigned char v17;

     double distance = 56E12; // 56E12 os equal to 56*10*12
     cout << distance << endl;

     ///////////////////////// Error! out of range:-
     // short d = 3434233;
     // cout << d << endl;

     unsigned a = -10;
     cout << a << endl;

     // size of
     cout << "The size of bool        data type is  " << sizeof(bool) << endl;
     cout << "The size of char        data type is  " << sizeof(char) << endl;
     cout << "The size of short       data typr is  " << sizeof(short int) << endl;
     cout << "The size of int         data type is  " << sizeof(int) << endl
          << endl;

     cout << "The size of long        data type is  " << sizeof(long) << endl;
     cout << "The size of long long   data type is  " << sizeof(long long) << endl
          << endl;

     cout << "The size of float       data type is  " << sizeof(float) << endl;
     cout << "The size of double      data type is  " << sizeof(double) << endl
          << endl
          << endl;

     cout << "----------------------------------------------------------------------------------------\n\n";

     // range: min & max
     cout << "char range:                            (" << CHAR_MIN << ", " << CHAR_MAX << ")\n";
     cout << "unsigned char range:                   (" << 0 << ", " << UCHAR_MAX << ")\n\n";

     cout << "short int range:                       (" << SHRT_MIN << ", " << SHRT_MAX << ")\n";
     cout << "unsigned shor int range:               (" << 0 << ", " << USHRT_MAX << ")\n\n";

     cout << "int range:	                       (" << INT_MIN << ", " << INT_MAX << ")\n";
     cout << "unsigned int range:                    (" << 0 << ", " << UINT_MAX << ")\n";
     cout << "long int range:                        (" << LONG_MIN << ", " << LONG_MAX << ")\n";
     cout << "unsigned long int range:               (" << 0 << ", " << ULONG_MAX << ")\n\n";

     cout << "long long int range:                   (" << LLONG_MIN << ", " << LLONG_MAX << ")\n";
     cout << "unsigned long long int range:	       (" << 0 << ", " << ULLONG_MAX << ")\n\n";

     cout << "float range:                           (" << FLT_MIN << ", " << FLT_MAX << ")\n";
     cout << "float (negative) range:	               (" << -FLT_MIN << ", " << -FLT_MAX << ")\n\n";

     cout << "double range:                          (" << DBL_MIN << ", " << DBL_MAX << ")\n";
     cout << "double(negative) range:                (" << -DBL_MIN << ", " << -DBL_MAX << ")\n\n";

     return 0;
}