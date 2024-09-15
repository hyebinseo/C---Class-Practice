// Question. Format the output as the following://
// - Set the character and their width & alignment for the next output operation
// - Set number of digits to display for 1) floating points and 2) significant digits
// - Force numbers to be displayed in 1) fixed-point notation or 2) scientific notation
// - Convert input character to upper and lowercase

# include <iostream>
# include <iomanip> // for manipulating io streams

int main() {
    // std::cout << std::setfill('2') << std::setw(4) << "5" << std::endl; // fill with three twos // one chracater has '' while strings have ""
    std::cout << std::setfill('2') << std::setw(4) << std::right << "5" << std::endl; // aligns 5
    std::cout << std::setfill('2') << std::left << std::setw(4) << "5" << std::endl; 
    std::cout << std::setfill('2') << std::internal << std::setw(4) << "5" << std::endl; 


/*     float precision = 12.3456789; // store as float
    std::cout << precision << std::endl;
     std::cout << std::setprecision(2) << precision << std::endl; // returns 12
    std::cout << std::setprecision(3) << precision << std::endl; // returns 12.3
    std::cout << std::setprecision(4) << precision << std::endl; // returns 12.34
    std::cout << std::setprecision(5) << precision << std::endl; // returns 12.345
    std::cout << std::setprecision(6) << precision << std::endl; // returns 12.3456
    std::cout << std::setprecision(7) << precision << std::endl; // returns 12.34567
    std::cout << std::setprecision(8) << precision << std::endl; 
    // std::cout << std::setprecision(9) << precision << std::endl; // no error, returns random number
    // std::cout << std::setprecision(10) << precision << std::endl; // no error, returns random number

    std::cout << std::setprecision(3) << std::fixed << precision << std::endl; // returns three floating points, not just simply digits 
*/

/*     double num = 12.3456789; // store as float // conflicting declaration
    std::cout << std::scientific << num << std::endl;
    std::cout << std::fixed << num << std::endl;

    char lowletter = 'a';
    char highletter = 'A';
    std::cout << "Uppercase: " << char(std::toupper(lowletter)) << std::endl;
    std::cout << "Lower case: " << char(std::tolower(highletter)) << std::endl;
 */     
}