// In case of 20 print statements
//===============================
// Using \n
// → puts all 20 statements in the buffer
// → prints them on the screen
// → flushes the buffer once

// Using << endl
// → puts the first statement in the buffer
// → prints it on the screen
// → flushes the buffer
// → puts the second statement in the buffer
// → prints it on the screen
// → flushes the buffer .. so on
//=======================================
// Using \n vs endl depends on the case =
//=======================================
// In case of 1000 statements
// ==========================
// Best Practice:
// → Use \n for most statements
// → Use endl every 50 statements to flush the buffer

#include <iostream>
using namespace std;
int main()
{
    cout << "Mariam Moheb." << endl;
    cout << "Mariam Moheb\n";

    return 0;
}