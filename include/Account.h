#ifndef ACCOUNT_H
#define ACCOUNT_H

#include <string>
#include <vector>
#include "Transaction.h"

class Account {
public:
    Account(const std::string& name, double balance = 0.0);
    
    void deposit(double amount);
    void withdraw(double amount);
    double get_balance() const;
    std::string get_name() const;
    void add_transaction(const Transaction& transaction);
    void print_transactions() const;

private:
    std::string name;
    double balance;
    std::vector<Transaction> transactions;
};

#endif
