#include "Budget.h"

#include <utility>

Budget::Budget(std::string  category, const double amount) : category(std::move(category)), budget_amount(amount) {}

void Budget::set_budget(double amount) {
    budget_amount = amount;
}

bool Budget::check_budget(double spending) const {
    return spending <= budget_amount;
}

std::string Budget::get_category() const {
    return category;
}
