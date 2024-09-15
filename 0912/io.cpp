// Question. Receive a input number from the user, then print it out with messages //

# include <iostream>

int main() {
    int number;
    std::cout << "Enter a number: ";
    std::cin >> number; // assign input to number
    std::cout << "You have entered: " << number << std::endl;

    return 0;
}