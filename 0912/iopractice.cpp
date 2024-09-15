// Question. Receive and print the age, salary, and grade of a person //
// Note that cin reads until 1) expected by dtype or 2) whitespace appears, whichever comes sooner //
// Int: until a non-numeric appears (e.g., whitespace, newline)
// Char: one character //
// String: until a whitespace appears //

#include <iostream>

int main() {
    int age;
    int salary;
    char grade;

    std::cout << "Enter age: ";
    std::cin >> age;
    std::cout << "Enter salary: ";
    std::cin >> salary;
    std::cout << "Enter grade: ";
    std::cin >> grade;

// Question. Try chaining multiple cin operations together //
//  std::cin >> age >> grade >> salary;


    std::cout << "Your age is: " << age << std::endl;
    std::cout << "Your salary is: " << salary << std::endl;
    std::cout << "Your grade is: " << grade << std::endl;

    return 0;
}