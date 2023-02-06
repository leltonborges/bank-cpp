#ifndef BANK_CASHIER_HPP
#define BANK_CASHIER_HPP
#pragma  once

#include <string>
#include <iostream>
#include <utility>
#include "Employee.hpp"


class Cashier :
        public Employee {
public:
    Cashier(std::string name, std::string cpf, float salary);

    [[nodiscard]] float bonus() const override;
};


#endif //BANK_CASHIER_HPP
