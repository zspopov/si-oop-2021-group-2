#include "UltraDepositAccount.hpp"

UltraDepositAccount::UltraDepositAccount(const string& accountID) : DepositAccount(accountID, 100000) {
    this->type = AccountType::UDA;
}