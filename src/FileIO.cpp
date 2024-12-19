#include "FileIO.h"
#include <fstream>
#include <iostream>
#include <sstream>

void FileIO::save_accounts(const std::vector<Account>& accounts, const std::string& filename) {
    std::ofstream file(filename);
    if (!file.is_open()) {
        std::cerr << "Failed to open file for saving accounts.\n";
        return;
    }

    for (const auto& account : accounts) {
        file << account.get_name() << "," << account.get_balance() << "\n";
    }

    file.close();
}

void FileIO::load_accounts(std::vector<Account>& accounts, const std::string& filename) {
    std::ifstream file(filename);
    if (!file.is_open()) {
        std::cerr << "Failed to open file for loading accounts.\n";
        return;
    }

    std::string name;
    double balance;
    while (file >> name >> balance) {
        accounts.push_back(Account(name, balance));
    }

    file.close();
}
