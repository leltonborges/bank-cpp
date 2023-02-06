#include "Manager.h"

#include <utility>

Manager::Manager(std::string name, std::string cpf, std::string login, std::string pass, float salary):
        Employee(std::move(name), std::move(cpf), salary),
        Authentication(std::move(login), std::move(pass)) {
}

float Manager::bonus() const {
    return this->getSalary() * 1.15f;
}
