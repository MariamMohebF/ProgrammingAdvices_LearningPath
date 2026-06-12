#include <iostream>
using namespace std;

void readgrades(float grades[3])
{
    cout << "plz enter grade 1? \n";
    cin >> grades[0];

    cout << "plz enter grade 2? \n";
    cin >> grades[1];

    cout << "plz enter grade 3? \n";
    cin >> grades[2];
}

float calgradesavg(float grades[3])
{
    float avg = (grades[0] + grades[1] + grades[2]) / 3;
    return avg;
}

void printgrades(float avg)
{
    cout << "\n *********************************** \n";
    cout << "the avrage of grades is " << avg << endl;
}
int main()
{
    float grades[3];

    readgrades(grades);
    printgrades(calgradesavg(grades));

    return 0;
}

#pragma region // ideal solution

// void readgrades(float grades[3])
// {
//     cout << "plz enter grade 1? \n";
//     cin >> grades[0];

//     cout << "plz enter grade 2? \n";
//     cin >> grades[1];

//     cout << "plz enter grade 3? \n";
//     cin >> grades[2];
// }

// float calgradesavg(float grades[3])
// {
//     return (grades[0] + grades[1] + grades[2]) / 3;
// }

// int main()
// {
//     float grades[3];

//     readgrades(grades);
//     cout << "the avrage of grades is " << calgradesavg(grades) << endl;

//     return 0;
// }
#pragma endregion