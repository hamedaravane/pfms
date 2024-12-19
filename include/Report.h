#ifndef REPORT_H
#define REPORT_H

#include <string>
#include <vector>
#include "Account.h"

class Report {
public:
    static void generate_account_report(const std::vector<Account>& accounts);
    static void generate_transaction_report(const Account& account);
};

#endif
