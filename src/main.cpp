#include "Account.h"
#include "FileIO.h"
#include "Report.h"
#include "Investment.h"
#include "Budget.h"
#include <vector>
#include <iostream>

int main() {
    std::vector<Account> accounts;

    FileIO::load_accounts(accounts, "accounts.txt");

    Account new_account("John Doe", 500.0);
    accounts.push_back(new_account);

    new_account.deposit(200.0);
    new_account.withdraw(50.0);

    const Investment investment("Stocks", 1000.0, 0.05, 5);
    investment.add_investment(new_account);

    // Create budget
    Budget budget("Groceries", 300.0);
    if (!budget.check_budget(250.0)) {
        std::cout << "Over budget!" << std::endl;
    }

    Report::generate_account_report(accounts);
    Report::generate_transaction_report(new_account);

    FileIO::save_accounts(accounts, "accounts.txt");

    return 0;
}
