#ifndef TRANSACTION_H
#define TRANSACTION_H

#include <string>
#include <ctime>

class Transaction {
public:
    Transaction(std::string  type, double amount, std::string  date);

    [[nodiscard]] std::string get_type() const;
    [[nodiscard]] double get_amount() const;
    [[nodiscard]] std::string get_date() const;

private:
    std::string type;
    double amount;
    std::string date;
};

#endif
