#include "Account.hpp"

class DepositAccount : public Account {
    double intrest;
public:
    DepositAccount(const string& accountID, double instrest);
    void print() const;  
};
