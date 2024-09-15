// Question. Perform error handling with cin //
// Scenario. A person inputs a character to a int type //

# include <iostream>
# include <limits> // include for numeric limits

int main() {
    int temp;
    std::cout << "Enter the temperature: " << std::flush;
    if (!(std::cin >> temp)) { // !error = True
        std::cout << "Temperature must be a number!" << std::endl;
        std::cin.clear(); // clear error state
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // ignore until next line // why < and not << when is < used
    }
    else {
        std::cout << "Temperature: " << temp;
    }

    return 0;
}