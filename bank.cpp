#include "bank.h"

#include <utility>

long AccountBank::numAccount = 0;

AccountBank::AccountBank(OwnerAccount ownerAccount):
        owner(std::move(ownerAccount)),
        number(randNum(1000, 1000)),
        digit(randNum(100)),
        balance(0.0) {
    numAccount++;
}

AccountBank::~AccountBank() {
    AccountBank::numAccount--;
}

void AccountBank::deposit(double amount) {
    this->balance += amount;
}

bool AccountBank::isAvailableBalance(const double amount) const {
    return this->balance >= amount;
}

double AccountBank::withdraw(const double amount) {
    if (this->isAvailableBalance(amount))
        this->balance -= amount;
    else throw std::invalid_argument("Insufficient balace for withdraw");

    return this->getAmount();
}

void AccountBank::transfer(AccountBank &bank, const double amount) {
    if (this->isAvailableBalance(amount))
        bank.deposit(amount);
}

double AccountBank::getAmount() const {
    return this->balance;
}

long AccountBank::numberAccounts() {
    return AccountBank::numAccount;
}

std::string AccountBank::getAccount() const {
    return std::to_string(this->number) + "-" + std::to_string(this->digit);
}