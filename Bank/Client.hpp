#ifndef CLIENT_H
#define CLIENT_H

#include <vector>

#include "Account.hpp"
#include "DepositAccount.hpp"
#include "CreditAccount.hpp"

class Client {
    string name;
    vector<Account *> accounts;
public:
    Client(const string& name = "N/A");

    void addAccount(Account * account);
    //void removeAccount(Account * account);

    void print() const;

    ~Client();
};

#endif//CLIENT_H