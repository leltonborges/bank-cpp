#pragma once
#ifndef BANK_ACCOUNTBANK_H
#define BANK_ACCOUNTBANK_H

#include <iostream>
#include <string>
#include <exception>
#include <utility>
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

    double withdraw(double balance) noexcept(false);

public:
    AccountBank() = delete;

    explicit AccountBank(OwnerAccount &ownerAccount);

    virtual ~AccountBank();

    void deposit(double balance);

    double withdrawPlusRate(const double &amount) noexcept(false);

    [[nodiscard]] double getAmount() const;

    void transfer(AccountBank &bank, double amount);

    [[nodiscard]] std::string getAccount() const;

    static long numberAccounts();

    [[nodiscard]] virtual double valueRate() const = 0;
};


#endif //BANK_ACCOUNTBANK_H
