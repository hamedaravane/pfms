#ifndef BUDGET_H
#define BUDGET_H

#include <string>

class Budget {
public:
    Budget(const std::string& category, double amount);

    void set_budget(double amount);
    bool check_budget(double spending) const;
    std::string get_category() const;

private:
    std::string category;
    double budget_amount;
};

#endif
