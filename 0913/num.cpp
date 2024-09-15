// Question. Receive and output a number //

# include <iostream>

int main () {
    int num;
    std::cout << "Enter a number: " << std::flush;
    std::cin >> num;
    std::cout<< "You entered: " << num << std::endl;

    return 0; 
}