//
// Created by leltonborges on 05/02/23.
//

#ifndef BANK_MANAGER_H
#define BANK_MANAGER_H
#pragma  once

#include <string>
#include <iostream>
#include <utility>
#include "Employee.h"
#include "Authentication.h"

class Manager: public Employee, public Authentication{
public:
 explicit Manager(std::string name, std::string cpf,std::string login,std::string pass, float salary);

    [[nodiscard]] float bonus() const override;
};


#endif //BANK_MANAGER_H
