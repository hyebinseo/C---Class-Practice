// Question. Receive a whole line from the buffer //

# include <iostream>
# include <string>

int main () {
    std::string line;
    std::cout << "Input a sentence: ";
    std::getline(std::cin, line); // syntax std::getline(std::cin, variable)
    std::cout << "You gave the sentence: " << line;
    return 0;
}