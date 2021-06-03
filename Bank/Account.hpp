#ifndef ACCOUNT_H
#define ACCOUNT_H

#include <iostream>
#include <string>
using namespace std;

enum AccountType {
    DEPOSIT_ACCOUNT,
    CREDIT_ACCOUNT,
    UDA
};

class Account {
private:
    string accountID;
    double balance;
protected:
    AccountType type;
public:
    Account(const string & accountID, const AccountType& type);

    virtual double getBalance() const;
    virtual AccountType getType() const;

    virtual void deposit(double amount);
    virtual bool withdraw(double amount);
    virtual void print() const = 0;

    virtual Account * clone() const = 0;

    virtual ~Account() {
        cout << "~Account()\n";
    }
};

#endif//ACCOUNT_H