#include "CreditAccount.hpp"

double CreditAccount::valueRate() const {
    return 1.05;
}

CreditAccount::CreditAccount(OwnerAccount ownerAccount):
        AccountBank(ownerAccount) {}

void CreditAccount::operator+=(CreditAccount &mainAccount) {
    double amount = mainAccount.getAmount() / 2;
    this->deposit(amount);
    mainAccount.withdrawPlusRate(amount);
}

//void CreditAccount::operator+=(float amount) {
//    AccountBank::operator+=(amount);
//}
