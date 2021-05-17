#ifndef DEPOSIT_ACCOUNT_H
#define DEPOSIT_ACCOUNT_H


#include "Account.hpp"

class DepositAccount : public Account {
    double intrest;
public:
    DepositAccount(const string& accountID, double instrest);
    void print() const;  

    Account * clone() const;

    ~DepositAccount() {
        cout << "~DepositAccount()\n";
    }
};


#endif