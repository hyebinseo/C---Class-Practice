// Question. Perform error handling with cin //
// Scenario. A person inputs a character to a int type //

# include <iostream>
# include <limits>

int main() {
    int year;
    std::cout << "Enter year: " << std::flush;
    if (!(std::cin >> year)) { // !error = True
        std::cout << "Year must be a number." << std::endl; // error message
        std::cin.clear(); // clear input not output
        std::cin.ignore(
            std::numeric_limits<std::streamsize>::max(), '\n'
        ); // max is a function, ignore until next new line, ignore a line    
    } 
    return 0;
}