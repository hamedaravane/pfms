#ifndef TRANSACTION_H
#define TRANSACTION_H

#include <string>
#include <ctime>

class Transaction {
public:
    Transaction(const std::string& type, double amount, const std::string& date);

    // Accessor functions
    std::string get_type() const;
    double get_amount() const;
    std::string get_date() const;

private:
    std::string type;  // "Deposit" or "Withdraw"
    double amount;     // Transaction amount
    std::string date;  // Transaction date (format: YYYY-MM-DD)
};

#endif // TRANSACTION_H
