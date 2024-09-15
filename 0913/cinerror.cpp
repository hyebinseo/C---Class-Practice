// Question. Perform error handling with cin //
// Scenario. A person inputs a character to a int type //

# include <iostream>
# include <limits> // include header

int main () {
    int score;
    std::cout << "Enter score: " << std::flush;
    if (!(std::cin >> score)) { // cin state errror // !error = True
        std::cout << "Score must be a number!" << std::endl; // print error message
        std::cin.clear(); // reset error state for cin
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // no function -> max() // ignores rest of input // discard the input, not the output
    } 

    return 0;
}