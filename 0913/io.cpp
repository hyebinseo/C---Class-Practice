// Question. Receive a input number from the user, then print it out with messages //

# include <iostream>

int main() {
    int num;
    std::cout << "Enter a number: " << std::flush;
    std::cin >> num;
    std::cout << "You entered: " << num << std::endl;

    return 0;
}