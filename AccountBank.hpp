#pragma once
#ifndef BANK_ACCOUNTBANK_HPP
#define BANK_ACCOUNTBANK_HPP

#include <iostream>
#include <string>
#include <exception>
#include <utility>
#include "OwnerAccount.hpp"
#include "utils.hpp"

#pragma  once

class AccountBank {
public:
    enum ResultWithdraw{
        SUCCESS,
        NEGATIVE,
        INSUFICIENT
    };

private:
    OwnerAccount owner;
    unsigned long number{};
    unsigned long digit{};
    double balance{};

    static long numAccount;

    [[nodiscard]] bool isAvailableBalance(double balance) const;

    std::pair<AccountBank::ResultWithdraw,double> withdraw(double balance) noexcept(false);

public:
    AccountBank() = delete;

    explicit AccountBank(OwnerAccount &ownerAccount);

    virtual ~AccountBank();

    void deposit(double balance);

    std::pair<ResultWithdraw,double> withdrawPlusRate(const double &amount) noexcept(false);

    [[nodiscard]] double getAmount() const;

    void transfer(AccountBank &bank, double amount);

    [[nodiscard]] std::string getAccount() const;

    static long numberAccounts();

    [[nodiscard]] virtual double valueRate() const = 0;

    void operator+=(float amount);
    friend std::ostream& operator<<(std::ostream &osCout, const AccountBank &accountBank);
};


#endif //BANK_ACCOUNTBANK_HPP
