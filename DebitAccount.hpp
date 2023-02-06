#ifndef BANK_DEBITACCOUNT_HPP
#define BANK_DEBITACCOUNT_HPP
#pragma  once

#include "AccountBank.hpp"
#include "OwnerAccount.hpp"

class DebitAccount final : public AccountBank {
public:
    explicit DebitAccount(OwnerAccount ownerAccount);

    ~DebitAccount() override;

    [[nodiscard]] double valueRate() const override;
};


#endif //BANK_DEBITACCOUNT_HPP
