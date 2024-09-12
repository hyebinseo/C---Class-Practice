// Question. Format the output as the following://
// - Set the character and their width & alignment for the next output operation
// - Set number of digits to display for 1) floating points and 2) significant digits
// - Force numbers to be displayed in 1) fixed-point notation or 2) scientific notation
// - Convert input character to upper and lowercase

# include <iostream>
# include <iomanip> //input output manipulator
# include <string>
# include <cctype>

int main() {
    double pi = 3.14159265;
    std::cout << "Pi with 2 decimal places: " << std::setprecision(2) << std::fixed << pi << std::endl; // spelling warning // total digits // fixed for floating digits

    double num = 123456789.123456789;
    std::cout << std::setprecision(4) << num << std::endl; // put std::endl as best practice
    std::cout << std::setprecision(4) << std::fixed << num << std::endl; // fixed ensures fixed-point notation // ensure fixed comes before the number

    int score = 5;
    std::cout << std::setfill('0') << std::setw(8) << score << std::endl; // setfill sets value, setw sets the width

    char upletter = 'A'; // ensure std:: string
    char downletter = 'a'; // ensure std:: string // only single quotes for characters
    std::cout << char(toupper(downletter));
    std::cout << char(tolower(upletter));

    return 0;

    
}