#include "OwnerAccount.hpp"

#include <utility>

OwnerAccount::OwnerAccount(std::string name, std::string cpf):
        Person(std::move(name), std::move(cpf)) {}
