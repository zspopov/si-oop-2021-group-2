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

    double getBalance() const;

    void deposit(double amount);
    bool withdraw(double amount);
    virtual void print() const;
};

#endif//ACCOUNT_H