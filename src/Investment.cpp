#include "Investment.h"
#include "Transaction.h"

Investment::Investment(const std::string& type, double amount, double interest_rate, int duration_years)
    : type(type), amount(amount), interest_rate(interest_rate), duration_years(duration_years) {}

void Investment::add_investment(Account& account) {
    account.deposit(amount);
    account.add_transaction(Transaction("Investment", amount, "2024-06-17"));
}

double Investment::calculate_roi() const {
    return amount * (1 + interest_rate * duration_years);
}
