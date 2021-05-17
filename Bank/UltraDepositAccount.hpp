#ifndef ULTRA_DEPOSIT_ACCOUNT
#define ULTRA_DEPOSIT_ACCOUNT

#include "DepositAccount.hpp"

class UltraDepositAccount : public DepositAccount {
public:
    UltraDepositAccount(const string& accountID);
};

#endif//ULTRA_DEPOSIT_ACCOUNT

//              Account
//               /    \
//     DepositAccount CreditAccount
//              /
// UltraDepositAccount