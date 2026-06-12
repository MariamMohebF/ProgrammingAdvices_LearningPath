#include <iostream>
using namespace std;

int main()
{
    float grades[3];

    cout << "plz enter grade 1? \n";
    cin >> grades[0];

    cout << "plz enter grade 2? \n";
    cin >> grades[1];

    cout << "plz enter grade 3? \n";
    cin >> grades[2];

    float avg = (grades[0] + grades[1] + grades[2]) / 3;

    cout << "\n***************************\n";
    cout << "the average of grades is " << avg << endl;

    return 0;
}