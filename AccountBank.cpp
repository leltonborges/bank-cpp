#include "AccountBank.hpp"

long AccountBank::numAccount = 0;

AccountBank::AccountBank(OwnerAccount &ownerAccount):
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

std::pair<AccountBank::ResultWithdraw, double> AccountBank::withdraw(const double amount) {
    if (amount > 0)
        return std::make_pair(NEGATIVE, this->getAmount());
    else if (this->isAvailableBalance(amount)) {
        this->balance -= amount;
        return std::make_pair(SUCCESS, this->getAmount());
    } else return std::make_pair(INSUFICIENT, this->getAmount());
//    else throw std::invalid_argument("Insufficient balace for withdraw");

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

std::pair<AccountBank::ResultWithdraw, double> AccountBank::withdrawPlusRate(const double &amount) {
    double amountPlusRate = this->valueRate() * amount;
    return this->withdraw(amountPlusRate);
}

void AccountBank::operator+=(float amount) {
    this->deposit(amount);
}