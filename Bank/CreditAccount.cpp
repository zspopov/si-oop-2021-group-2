#include "CreditAccount.hpp"

CreditAccount::CreditAccount(const string & accountID, double intrest) 
            : Account(accountID, AccountType::CREDIT_ACCOUNT) , intrest(intrest) , due(0) {}
    
void CreditAccount::deposit(double amount) {
    Account::deposit(amount);
    this->due = this->getBalance() + this->getBalance() * this->intrest;
}

Account * CreditAccount::clone() const {
    return new CreditAccount(*this);
}

void CreditAccount::print() const {
    Account::print();
    cout << " : " << this->due << " : " << this->intrest;
}
