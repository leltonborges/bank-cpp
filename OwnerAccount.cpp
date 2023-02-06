#include "OwnerAccount.hpp"

#include <utility>

OwnerAccount::OwnerAccount(std::string name, std::string cpf):
        name(std::move(name)),
        cpf(std::move(cpf)) {}

std::string OwnerAccount::getName() const {
    return this->name;
}

std::string OwnerAccount::getCpf() const {
    return this->cpf;
}
