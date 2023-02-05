//
// Created by leltonborges on 04/02/23.
//

#include "Employee.h"

[[maybe_unused]] Employee::Employee(std::string name, std::string cpf):
Person(std::move(cpf), std::move(name)) {}
