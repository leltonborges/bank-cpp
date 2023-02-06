#include "CreditAccount.hpp"

double CreditAccount::valueRate() const {
    return 1.05;
}

CreditAccount::CreditAccount(OwnerAccount ownerAccount):
        AccountBank(ownerAccount) {}
