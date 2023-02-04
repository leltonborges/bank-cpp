#pragma once
#ifndef BANK_BANK_H
#define BANK_BANK_H

#include <iostream>
#include <string>
#include <exception>
#include "OwnerAccount.h"
#include "utils.h"

class AccountBank {
private:
    OwnerAccount owner;
    unsigned long number{};
    unsigned long digit{};
    double balance{};

    static long numAccount;

    [[nodiscard]] bool isAvailableBalance(double balance) const;

public:
    AccountBank() = delete;

    explicit AccountBank(OwnerAccount ownerAccount);

    ~AccountBank();

    void deposit(double balance);

    double withdraw(double balance) noexcept(false);

    [[nodiscard]] double getAmount() const;

    void transfer(AccountBank &bank, double amount);
    std::string getAccount() const;

    static long numberAccounts();
};


#endif //BANK_BANK_H
