#include "Transaction.h"

#include <utility>

Transaction::Transaction(std::string  type, const double amount, std::string  date)
    : type(std::move(type)), amount(amount), date(std::move(date)) {}

std::string Transaction::get_type() const {
    return type;
}

double Transaction::get_amount() const {
    return amount;
}

std::string Transaction::get_date() const {
    return date;
}
