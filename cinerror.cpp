// Question. Perform error handling with cin //
// Scenario. A person inputs a character to a int type //

#include <iostream>
#include <limits>

int main () {
    int age; // error if no input
    std::cout << "Enter your age: ";
    if (!(std::cin >> age)) { // must encase in ()
        std::cerr << "Input was not a number.";
        std::cerr << "Age must be a number!";
        std::cin.clear(); // reset state of cin
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // ignore rest of line
        std::cout << std::endl; // use endl (stream manipulator) with cout (stream)
                                // check no left in buffer
    }
    return 0;
}