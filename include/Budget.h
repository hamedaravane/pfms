#ifndef BUDGET_H
#define BUDGET_H

#include <string>

class Budget {
public:
    Budget(std::string  category, double amount);

    void set_budget(double amount);
    [[nodiscard]] bool check_budget(double spending) const;
    [[nodiscard]] std::string get_category() const;

private:
    std::string category;
    double budget_amount;
};

#endif
