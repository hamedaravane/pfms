#include "Budget.h"

Budget::Budget(const std::string& category, double amount) : category(category), budget_amount(amount) {}

void Budget::set_budget(double amount) {
    budget_amount = amount;
}

bool Budget::check_budget(double spending) const {
    return spending <= budget_amount;
}

std::string Budget::get_category() const {
    return category;
}
