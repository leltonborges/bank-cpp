#include "Cashier.hpp"

float Cashier::bonus() const {
    return this->getSalary() * 1.1f;
}

Cashier::Cashier(std::string name, std::string cpf, float salary):
        Employee(std::move(name), std::move(cpf), salary) {
}
