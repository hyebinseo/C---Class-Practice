// Question. Receive a whole line from the buffer //

# include <iostream>
# include <string> // to use string library

int main() {
    std::string sentence; // from std::
    std::cout << "Enter sentence: " << std::flush;
    std::getline(std::cin, sentence); // cin X here, saves input to variable
    std::cout << "Your sentence: " << sentence << std::endl;

    return 0;
}