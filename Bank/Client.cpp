#include "Client.hpp"

template <typename T, typename U>
U* castable(const T *ptr) {
    return (dynamic_cast<U*>(const_cast<T*>(ptr)));
}

Client::Client(const string& name) : name(name) {}

Client::Client(const Client& other) {
    this->name = other.name;
    for (int i = 0; i < other.accounts.size(); i++) {
        this->addAccount(other.accounts[i]);
    }
}
    
Client& Client::operator=(const Client& other) {
    if (this != &other) {
        for (int i = 0; i < this->accounts.size(); i++) {
            delete this->accounts[i];
        }

        this->name = other.name;
        for (int i = 0; i < other.accounts.size(); i++) {
            this->addAccount(other.accounts[i]);
        }
    }
    return *this;
}

void Client::addAccount(Account * account) {
    this->accounts.push_back(account->clone());
}

// void Client::removeAccount(Account * account) {

// }

void Client::print() const {
    for (unsigned int i = 0; i < this->accounts.size(); i++) {
        this->accounts[i]->print();
        cout << "\n";
    }
}

void Client::printDepositAccount() const {
    for (auto account : this->accounts) {
        if (!::castable<Account, UltraDepositAccount>(account) && ::castable<Account, DepositAccount>(account)) {
            DepositAccount * da = ::castable<Account, DepositAccount>(account);
            da->print();
            cout << "\n";
        }
    }
}

Client::~Client() {
    cout << "~Client()\n";
    for (unsigned int i = 0; i < this->accounts.size(); i++) {
        delete this->accounts[i];
    }
}