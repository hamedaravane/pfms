#ifndef FILEIO_H
#define FILEIO_H

#include <string>
#include <vector>
#include "Account.h"

class FileIO {
public:
    static void save_accounts(const std::vector<Account>& accounts, const std::string& filename);

    static void load_accounts(std::vector<Account>& accounts, const std::string& filename);
};

#endif
