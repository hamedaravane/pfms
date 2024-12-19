#ifndef ACCOUNT_H
#define ACCOUNT_H

#include <string>
#include <vector>
#include "Transaction.h"

class Account {
public:
    explicit Account(std::string  name, double balance = 0.0);
    
    void deposit(double amount);
    void withdraw(double amount);
    [[nodiscard]] double get_balance() const;
    [[nodiscard]] std::string get_name() const;
    void add_transaction(const Transaction& transaction);
    void print_transactions() const;

private:
    std::string name;
    double balance;
    std::vector<Transaction> transactions;
};

#endif
