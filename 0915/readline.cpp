// Question. Receive a whole line from the buffer

# include <iostream>
# include <string>

int main() {
    std::string sentence;
    std::cout << "Enter a sentence: ";
//    std::cin >> sentence; // cin stops at first whitespace, cannot get sentence
    std::getline(std::cin, sentence);
    std::cout << "Input: " << sentence << std::endl; // returns whole line

    return 0;
}