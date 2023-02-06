#ifndef BANK_MANAGER_HPP
#define BANK_MANAGER_HPP
#pragma  once

#include <string>
#include <iostream>
#include <utility>
#include "Employee.hpp"
#include "Authentication.hpp"

class Manager: public Employee, public Authentication{
public:
 explicit Manager(std::string name, std::string cpf,std::string login,std::string pass, float salary);

    [[nodiscard]] float bonus() const override;
};


#endif //BANK_MANAGER_HPP
