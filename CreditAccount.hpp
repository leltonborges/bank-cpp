#ifndef BANK_CREDITACCOUNT_HPP
#define BANK_CREDITACCOUNT_HPP
#pragma  once

#include "AccountBank.hpp"
#include "OwnerAccount.hpp"

class CreditAccount final :
        public AccountBank {
public:
    [[nodiscard]] double valueRate() const override;

    explicit CreditAccount(OwnerAccount ownerAccount);
};

#endif
