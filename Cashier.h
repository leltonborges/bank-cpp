#ifndef BANK_CASHIER_H
#define BANK_CASHIER_H
#pragma  once

#include <string>
#include <iostream>
#include <utility>
#include "Employee.h"


class Cashier :
        public Employee {
public:
    Cashier(std::string name, std::string cpf, float salary);

    [[nodiscard]] float bonus() const override;
};


#endif //BANK_CASHIER_H
