#include <iostream>
#include "Account.hpp"
#include "CreditAccount.hpp"
#include "DepositAccount.hpp"
#include "Client.hpp"

int main() {
    DepositAccount * d = new DepositAccount("di1234di", 0.2);
    CreditAccount * c = new CreditAccount("ri1234ri", 0.3);

    Client client("Me");
    client.addAccount(d);
    client.addAccount(c);
    client.print();

    delete d;
    delete c;

    return 0;
}