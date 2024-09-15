// Question. Use directive to define and use a namespace without the scope resolution operator in both the 1) local scope and 2) global scope//
//           Then, use an alias to refer to a namespace//

# include <iostream>

namespace Pet {
    char name[10];
    int age;
    int happy = 10;
    int health = 100;

    void create() {
        std::cout << "Enter name: " << std::flush;
        std::cin >> name;
        std::cout << "Enter age: " << std::flush;
        std::cin >> age;
//        std::cout << "Enter happiness: " << std::flush;
//        std::cin >> happy;
        std::cout << std::endl; // create new line

        std::cout << "Your pet " << name << std::endl;
        std::cout << "Age: " << age << std::endl;
        std::cout << "Happiness: " << happy << std::endl;
        std::cout << "Health: " << health << std::endl; // defaults to initialization // 0 if no initialization
    }
}

namespace Animal = Pet;

int main () {
    Pet::happy = 60; // changes value in namespace
    {
        using namespace Pet;
        health = 80; // changes value in namespace
    }
    Animal::create();
    return 0;
}