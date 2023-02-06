#ifndef BANK_DEBITACCOUNT_H
#define BANK_DEBITACCOUNT_H

#include "AccountBank.h"
#include "OwnerAccount.h"

class DebitAccount final : public AccountBank {
public:
    explicit DebitAccount(OwnerAccount ownerAccount);

    ~DebitAccount() override;

    [[nodiscard]] double valueRate() const override;
};


#endif //BANK_DEBITACCOUNT_H
