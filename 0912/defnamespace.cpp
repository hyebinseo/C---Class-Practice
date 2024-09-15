// Question. Define a namespace with 1) two integers and 2) a function using those integers.//
//           Then, use the function outside the namespace in main()// 
//           Then, use a directive outside the namespace in main()//
# include <iostream> 

namespace nameSpacename {
    int x;
    int y;
}

namespace nameSpacename {
    void add(int a, int b) {
        a = x; // access within namespace
        b = y;
        std::cout << (a + b);
    }
}

int main() {
    using nameSpacename::x; // calling namespace within
    x = 3; // no longer needs 
//    nameSpacename::x = 3;
    nameSpacename::y = 5;
    nameSpacename::add(1,2); // outputs 8
    return 0;
} 
