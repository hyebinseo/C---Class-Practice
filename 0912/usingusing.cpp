// Question. Use directive to define and use a namespace without the scope resolution operator in both the 1) local scope and 2) global scope//
//           Then, use an alias to refer to a namespace//

#include <iostream> 
using namespace std; // requires include // not iostream

namespace first {
    int x = 5;
}

namespace second {
    double x = 3.1416;
}

namespace jabberwocky = second; // syntax is alias = namespace name, think of as "assigning"

int main() {
    using first::x; // until specific item
    cout << x << endl;
    cout << jabberwocky::x << endl; // note different xs
    return 0;
}