#include "Account.hpp"

Account::Account(const string & accountID, const AccountType& type) : accountID(accountID) , balance(0) , type(type) {}
 
double Account::getBalance() const {
    return this->balance;
}

AccountType Account::getType() const {
    return this->type;
}

void Account::deposit(double amount) {
    this->balance += amount;
}

bool Account::withdraw(double amount) {
    if (amount > this->balance) {
        cerr << "Amount to withdraw too much!\n";
        return 0;
    } else if (amount < 0) {
        cerr << "Amount to withdraw cannot be negative!\n";
        return 0;
    } else {
        this->balance -= amount;
        return 1;
    }
}

void Account::print() const {
    cout << this->accountID << " : " << this->balance;
}