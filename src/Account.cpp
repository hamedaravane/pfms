#include "Account.h"
#include <iostream>

Account::Account(const std::string& name, double balance) : name(name), balance(balance) {}

void Account::deposit(double amount) {
    balance += amount;
    add_transaction(Transaction("Deposit", amount, "2024-06-17"));
}

void Account::withdraw(double amount) {
    if (amount > balance) {
        std::cerr << "Insufficient funds!\n";
    } else {
        balance -= amount;
        add_transaction(Transaction("Withdraw", amount, "2024-06-17"));
    }
}

double Account::get_balance() const {
    return balance;
}

std::string Account::get_name() const {
    return name;
}

void Account::add_transaction(const Transaction& transaction) {
    transactions.push_back(transaction);
}

void Account::print_transactions() const {
    std::cout << "Transactions for account: " << name << "\n";
    for (const auto& t : transactions) {
        std::cout << t.get_type() << " - $" << t.get_amount() << " on " << t.get_date() << "\n";
    }
}
