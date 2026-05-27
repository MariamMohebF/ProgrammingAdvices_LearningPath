/*
Literals:
==========
1. Integer Literals:
    1. decimal (base 10): 0, -9, 22 etc.
    2. octal (base 8): 021, 077, 033 etc.
    3. hexadecimal (base 16): Ox7f, Ox2a, etc.
        In C++ programming. octal starts with a O, and hexadecimal starts with a 0x.

2. Floating-Point Literals: 13.5.   1.99   - 8.07
3. Characters Literals: A, b , z , $, #
4. Escape Sequences Literals: \n .
 */

/*
Escap Sequences:
================
\\  → backslash
\t  → tab
\n  → newline
\a  → audio bell
\'  → single quote
\"  → double quote
 */

#include <iostream>
using namespace std;
int main()
{
    // no back slash
    //  cout << "M1\M2 \n";

    //  back slash
    cout << "M1\\M2 \n";

    // /t  back slash
    cout << "M1\tM2 \n";
    cout << "N1\tN2 \n";

    // /' /"  back slash
    cout << "my name is \"Mariam\" \n";

    //  /a  notification
    cout << "\a";

    return 0;
}