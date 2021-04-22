#include "DepositAccount.hpp"

DepositAccount::DepositAccount(const string& accountID, double instrest)
            : Account(accountID) , intrest(instrest) {}

void DepositAccount::print() const {
    Account::print();
    cout << " : " << this->intrest;
}