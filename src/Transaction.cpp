#include "Transaction.h"

Transaction::Transaction(const std::string& type, double amount, const std::string& date)
    : type(type), amount(amount), date(date) {}

std::string Transaction::get_type() const {
    return type;
}

double Transaction::get_amount() const {
    return amount;
}

std::string Transaction::get_date() const {
    return date;
}
