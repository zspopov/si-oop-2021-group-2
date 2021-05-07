#include "Client.hpp"

Client::Client(const string& name) : name(name) {}

void Client::addAccount(Account * account) {
    DepositAccount * depositAccount = dynamic_cast<DepositAccount *>(account);
    CreditAccount * creditAccount = dynamic_cast<CreditAccount *>(account);
    if(depositAccount) {
        this->accounts.push_back(new DepositAccount(*depositAccount));
    } 
    if(creditAccount) {
        this->accounts.push_back(new CreditAccount(*creditAccount));
    }
}

// void Client::removeAccount(Account * account) {

// }

void Client::print() const {
    for (unsigned int i = 0; i < this->accounts.size(); i++) {
        this->accounts[i]->print();
        cout << "\n";
    }
}

Client::~Client() {
    for (unsigned int i = 0; i < this->accounts.size(); i++) {
        delete this->accounts[i];
    }
}