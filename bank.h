#pragma once
#ifndef BANK_BANK_H
#define BANK_BANK_H

#include <iostream>
#include <string>
#include <ctime>
#include <exception>

unsigned long randNum(unsigned long limit, unsigned int ranger = 0);

class AccountBank {
private:
    std::string name{};
    std::string cpf{};
    unsigned long number{};
    unsigned long digit{};
    double balance{};

    static long numAccount;

    [[nodiscard]] bool isAvailableBalance(double balance) const;

public:
    AccountBank() = delete;
    AccountBank(std::string name, std::string cpf);
    ~AccountBank();

    void deposit(double balance);

    double withdraw(double balance) noexcept(false);

    [[nodiscard]] double getAmount() const;

    void transfer(AccountBank &bank, double amount);

    static long numberAccounts();
};


#endif //BANK_BANK_H
