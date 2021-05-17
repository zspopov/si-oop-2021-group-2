#include "DepositAccount.hpp"

DepositAccount::DepositAccount(const string& accountID, double instrest)
            : Account(accountID) , intrest(instrest) {}

Account * DepositAccount::clone() const {
    return new DepositAccount(*this);
}

void DepositAccount::print() const {
    Account::print();
    cout << " : " << this->intrest;
}