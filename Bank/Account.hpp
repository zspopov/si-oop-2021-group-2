#ifndef ACCOUNT_H
#define ACCOUNT_H

#include <iostream>
#include <string>
using namespace std;

class Account {
private:
    string accountID;
    double balance;
public:
    Account(const string & accountID);

    virtual double getBalance() const;

    virtual void deposit(double amount);
    virtual bool withdraw(double amount);
    virtual void print() const = 0;

    virtual Account * clone() const = 0;

    virtual ~Account() {
        cout << "~Account()\n";
    }
};

#endif//ACCOUNT_H