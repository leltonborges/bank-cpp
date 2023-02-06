#ifndef BANK_CREDITACCOUNT_H
#define BANK_CREDITACCOUNT_H
#include "AccountBank.h"
#include "OwnerAccount.h"

class CreditAccount final: public AccountBank {
public:
    [[nodiscard]] double valueRate() const override;
    explicit CreditAccount(OwnerAccount ownerAccount);
};

#endif
