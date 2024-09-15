// Question. Receive and print the age, salary, and grade of a person //

# include <iostream>

int main() {
    int age; // initialize variables before input
    int salary;
    char grade;

    std::cout << "Enter age: " << std::flush;
    std::cin >> age;
    std::cout << "Enter salary: " << std::flush;
    std::cin >> salary;
    std::cout << "Enter grade: " << std::flush;
    std::cin >> grade;

    std::cout << "Your age: " << age << std::endl;
    std::cout << "Your salary: " << salary << std::endl;
    std::cout << "Your grade: " << grade << std::endl;

    return 0;
}