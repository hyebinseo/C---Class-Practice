// Question. Define a namespace with 1) two integers and 2) a function using those integers.//
//           Then, use the function outside the namespace in main()// 
//           Then, use a directive outside the namespace in main()//

// Question:
// 1) Define a namespace called `MathOperations` that contains two integer variables (`num1` and `num2`).
// 2) Inside the namespace, define a function `add()` that adds these two integers and returns the result.
// 3) In the main() function, use the `add()` function outside of the namespace without using a namespace directive (using).
// 4) Then, use a directive outside the namespace in main() to access `num1` and `num2` directly.
// 5) Display the results in the main() function.

# include <iostream>

namespace MathOperations {
    int num1 = 3; // simply initialization
    int num2 = 5;

    int add(int num1, int num2) { // not same object 
        return (num1 + num2);
    }
}

namespace Jack = MathOperations; // creating and using alias for namespace

int main() {

    std::cout << "No Using directive: " << Jack::add(3, 5) << std::endl; // thus requires arguments // with alias still original

    using MathOperations::num1;
    using Jack::num2;
    std::cout << "Using directive: " << (num1 + num2); 

    return 0;
}