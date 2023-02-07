#include "Cashier.hpp"

Cashier::Cashier(std::string name, std::string cpf, float salary, PaymentDay payDay):
        Employee(std::move(name), std::move(cpf), salary, payDay) {
}

float Cashier::bonus() const {
    return this->getSalary() * 1.1f;
}
