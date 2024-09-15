// Question. Receive a whole line from the buffer //

# include <iostream>
# include <string> // include header

int main() {
    std::string sentence; // set dtype // remember std::
    std::cout << "Enter a sentence: " << std::flush;
    std::getline(std::cin, sentence); 
    std::cout << "Your sentence: " << sentence << std::endl;
}