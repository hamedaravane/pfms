#include "Investment.h"

#include <utility>
#include "Transaction.h"

Investment::Investment(std::string  type, const double amount, const double interest_rate, const int duration_years)
    : type(std::move(type)), amount(amount), interest_rate(interest_rate), duration_years(duration_years) {}

void Investment::add_investment(Account& account) const {
    account.deposit(amount);
    account.add_transaction(Transaction("Investment", amount, "2024-06-17"));
}

double Investment::calculate_roi() const {
    return amount * (1 + interest_rate * duration_years);
}
