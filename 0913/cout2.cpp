// Question. Receive a float as an input, then output its value, memory address, and Hello Word

# include <iostream>

int main() {
    int num;
    std::cout << "Enter a float: " << std::flush;
    std::cin >> num;
    std::cout << "Entered: " << num << std::endl;
    std::cout << "Address: " << &num << std::endl;
    std::cout << "Hello world!" << std::endl;

    return 0;
}