// Question. Format the output as the following://
// - Set the character and their width & alignment for the next output operation
// - Set number of digits to display for 1) floating points and 2) significant digits
// - Force numbers to be displayed in 1) fixed-point notation or 2) scientific notation
// - Convert input character to upper and lowercase

# include <iostream> // create io stream
# include <iomanip> // manipulate io stream
# include <string>

int main() {

/* 
    std::cout << std::setfill('a') << std::setw(10) << "I Love"; // sets total width to 10
    std::string word;
    word = "Love";
    std::cout << word.length() << std::endl;
    std::cout << word.size() << std::endl;   
    for (int i = 0; i <= word.length(); i++) {
        std::cout << std::setfill('0') << std::setw(i) << word << std::endl; // word length보다 작아서 Love만 계속 출력, '0'가 출력될 공간이 생기지 않음
    } 
    for (int i = 0; i <= word.length()*2; i++) {
        std::cout << std::setfill('0') << std::setw(i) << word << std::endl; // 8개까지 출력, 끝에 0이 4개 추가
    }
 */

// - Set number of digits to display for 1) floating points and 2) significant digits
    double pi = 3.45959; // double
    std::cout << std::setprecision(3) << pi << std::endl;
    std::cout << std::fixed << std::setprecision(3) << pi << std::endl;

// - Force numbers to be displayed in 1) fixed-point notation or 2) scientific notation
    double num = 234567.23456789; // int dtype removes decimals
    std::cout << std::scientific << num << std::endl;
    std::cout << std::fixed << num << std::endl;

// - Convert input character to upper and lowercase
    char lower = 'a';
    char upper = 'A';
    std::cout << "toupper: " << char(toupper(lower)) << std::endl;
    std::cout << "tolower: " << char(tolower(upper)) << std::endl;
    return 0;
}