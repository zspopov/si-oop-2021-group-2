#ifndef CLIENT_H
#define CLIENT_H

#include <vector>

#include "Account.hpp"
#include "DepositAccount.hpp"
#include "CreditAccount.hpp"
#include "UltraDepositAccount.hpp"

class Client {
    string name;
    vector<Account *> accounts;
public:
    Client(const string& name = "N/A");
    Client(const Client& other);
    Client& operator=(const Client& other);

    void addAccount(Account * account);
    //void removeAccount(Account * account);


    void printDepositAccount() const;
    void print() const;

    ~Client();
};

#endif//CLIENT_H