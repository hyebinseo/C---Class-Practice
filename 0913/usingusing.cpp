// Question. Use directive to define and use a namespace without the scope resolution operator in both the 1) local scope and 2) global scope//
//           Then, use an alias to refer to a namespace//

/* You are developing a banking application that will handle both international and domestic transactions. Each type of transaction has its own set of rules and data. To organize this, you will:

Create two namespaces, Domestic and International, each containing a function:

Domestic::transactionLimit (returns the limit for domestic transactions).
International::transactionLimit (returns the limit for international transactions).

In the global scope, use the using directive to bring in the entire Domestic namespace, allowing you to access Domestic::transactionLimit() without the scope resolution operator.

In a local scope (inside a function), use the using directive again to bring in the International namespace and access International::transactionLimit() without the scope resolution operator.

Create an alias for the International namespace called Intl, and use it to access the transactionLimit in another function.
 */

# include <iostream>

namespace Domestic {
    void transactionLimitDom() { // returns limit for domestic transactions
        std::cout << "Domestic transaction limit is 20" << std::endl;
    }
}
namespace International {
    void transactionLimitInt() { // returns limit for international transactions
        std::cout << "International transation limit is 40" << std::endl;
    }
}

using namespace Domestic; // include dtype

namespace Intl = International; // assignment

int main() {
    transactionLimitDom();

    International::transactionLimitInt();
    Intl::transactionLimitInt();
    { // create local scope to further limit directive usage
        using namespace International; // specific not dtype needed
        transactionLimitInt();
    }

    transactionLimitDom();
    Intl::transactionLimitInt(); // unsure which one to use

    return 0;
}