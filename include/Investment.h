#ifndef INVESTMENT_H
#define INVESTMENT_H

#include <string>
#include "Account.h"

class Investment {
public:
    Investment(std::string  type, double amount, double interest_rate, int duration_years);

    void add_investment(Account& account) const;
    [[nodiscard]] double calculate_roi() const;

private:
    std::string type;
    double amount;
    double interest_rate;
    int duration_years;
};

#endif
