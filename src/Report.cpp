#include "Report.h"
#include <iostream>

void Report::generate_account_report(const std::vector<Account>& accounts) {
    std::cout << "Account Report:\n";
    for (const auto& account : accounts) {
        std::cout << "Account: " << account.get_name() << ", Balance: $" << account.get_balance() << "\n";
    }
}

void Report::generate_transaction_report(const Account& account) {
    std::cout << "Transaction Report for " << account.get_name() << ":\n";
    account.print_transactions();
}
