#include "DepositAccount.hpp"

DepositAccount::DepositAccount(const string& accountID, double instrest)
            : Account(accountID, AccountType::DEPOSIT_ACCOUNT) , intrest(instrest) {}

Account * DepositAccount::clone() const {
    return new DepositAccount(*this);
}

void DepositAccount::print() const {
    Account::print();
    cout << " : " << this->intrest;
}