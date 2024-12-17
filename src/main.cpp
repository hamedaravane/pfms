#include <iostream>
#include "Account.h"

int main() {
    Account savings("Savings Account", 1000.0);

    savings.deposit(500);
    savings.withdraw(200);
    savings.withdraw(2000); // Should print an error

    std::cout << "Current Balance: $" << savings.get_balance() << "\n";
    savings.print_transactions();

    return 0;
}
