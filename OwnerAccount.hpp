#ifndef BANK_OWNERACCOUNT_HPP
#define BANK_OWNERACCOUNT_HPP
#pragma  once

#include <iostream>
#include <string>

class OwnerAccount {
private:
    std::string name{};
    std::string cpf{};

public:
    explicit OwnerAccount(std::string name, std::string cpf);

    [[nodiscard]] std::string getName() const;

    [[nodiscard]] std::string getCpf() const;
};

#endif //BANK_OWNERACCOUNT_HPP
