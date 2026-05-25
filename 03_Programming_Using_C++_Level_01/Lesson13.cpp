// printing practice

#include <iostream>

int main()
{
    // Output: on the same line
    std::cout << "Mohammed Abu-Hadhoud";
    std::cout << "This is my first c++ program!";

    std::cout << "\n======================================\n";

    // Output: on 2 lines Using \n
    std::cout << "Mohammed Abu-Hadoud\n";
    std::cout << "This is my first C++ program!";

    std::cout << "\n======================================\n";

    // Output: on 2 lines Using \n
    std::cout << "Mohammed Abu-Hadoud\n";
    std::cout << "This is my first C++ program!\n";

    std::cout << "\n======================================\n";

    // Output: on 3 lines Using \n
    std::cout << "Mohammed Abu-Hadoud\n\n";
    std::cout << "This is my first C++ program!";

    std::cout << "\n======================================\n";

    // Output: on 2 lines Using endl
    std::cout << "Mohammed Abu-Hadoud" << std::endl;
    std::cout << "This is my first C++ program!";

    std::cout << "\n======================================\n";

    // Output: on 2 lines Using endl
    std::cout << "Mohammed Abu-Hadoud" << std::endl;
    std::cout << "This is my first C++ program!" << std::endl;

    std::cout << "\n======================================\n";

    // Output: on 3 lines Using endl
    std::cout << "Mohammed Abu-Hadoud" << std::endl
              << std::endl;
    std::cout << "This is my first C++ program!";

    std::cout << "\n======================================\n";

    // Print Mutiple Messages in One Line
    std::cout << "M1" << "M2" << "M3\n";
    std::cout << "M1 " << "M2 " << "M3\n";

    std::cout << "\n======================================\n";

    // Write equations
    std::cout << "10+5= " << 10 + 5 << std::endl;
    std::cout << "The results of " << "10 + 5 = " << 10 + 5 << std::endl;

    return 0;
}