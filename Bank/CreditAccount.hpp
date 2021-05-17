#ifndef CREDIT_ACCOUNT_H
#define CREDIT_ACCOUNT_H

#include "Account.hpp"

class CreditAccount : public Account {
private:
    double due;
    double intrest;
public:
    CreditAccount(const string & accountID, double intrest);
    void deposit(double amount);
    virtual void print() const;

    Account * clone() const;    

    ~CreditAccount() {
        cout << "~CreditAccount()\n";
    }
};

#endif//CREDIT_ACCOUNT_H