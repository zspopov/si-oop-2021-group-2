#include <iostream>
#include "Account.hpp"
#include "CreditAccount.hpp"
#include "DepositAccount.hpp"

int main() {
    Account a("fi1234fi");
    a.deposit(200);
    a.print();
    cout << "\n";
    a.withdraw(150);
    a.print();
    cout << "\n";
    a.withdraw(100);
    a.print();
    cout << "\n";

    CreditAccount c("ki4321ki", 0.1);
    c.deposit(1000);
    c.print();
    cout << "\n";
    c.withdraw(400);
    c.print();
    cout << "\n";

    Account * pc = &c;
    Account & rc = c;

    cout << pc->getBalance();
    cout << "\n";

    pc->print();
    cout << "\n";

    rc.print();
    cout << "\n";

    DepositAccount d("di1234di", 0.2);
    CreditAccount r("ri1234ri", 0.3);

    Account * accounts[4];
    accounts[0] = &a;
    accounts[1] = &c;
    accounts[2] = &d;
    accounts[3] = &r;
    
    cout << "///////////////////////////////////\n";

    for(int i = 0; i < 4; i++) {
        accounts[i]->print();
        cout << "\n";
    }

    return 0;
}