// Question. Receive a float as an input, then output its value, memory address, and Hello Word

# include <iostream>

int main() {
    float num;
    std::cout << "Enter a decimal number: ";
    std::cin >> num;
    std::cout << "Value: " << num << std::flush; // flush does not create new line
    std::cout << "Address: " << &num << std::endl; // endl instead of newline
    std::cout << "Hello world!" << std::endl;
    
    return 0; 
}