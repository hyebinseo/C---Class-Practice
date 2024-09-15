// Question. Format the output as the following://
// - Set the character and their width & alignment for the next output operation
// - Set number of digits to display for 1) floating points and 2) significant digits
// - Force numbers to be displayed in 1) fixed-point notation or 2) scientific notation
// - Convert input character to upper and lowercase

# include <iostream> // for input and output stream
# include <iomanip> // for manipulating the io

int main() {
    std::cout << std::setfill('p') << std::setw(6) << "5" << std::endl; 
                                                           // error message that operator working with operands unfit for that operator
                                                           // next line shows possible dtypes for operator
    std::cout << std::setfill('3') << std::setw(10) << "Love" << std::endl; // setw sets total number of characters, not filling in amount
//    std::cout << std::setfill("LoveYou") << std::setw(5) << "Boi"; // setfill only works with single characters    

    double e = 123456789.71828; // make sure double
    double pi = 12.4567;

    std::cout << std::fixed << std::setprecision(3) << pi << std::endl; // number of digits to display
    std::cout << std::fixed << e << std::endl;
    std::cout << std::scientific << e << std::endl;

    char lower = 'a';
    char upper = 'A';
    std::cout << "Uppercase: " << char(std::toupper(lower));
    std::cout << "Lowercase: " << char(std::tolower(upper));

    return 0;
} 