#ifndef BANK_EMPLOYEE_H
#define BANK_EMPLOYEE_H

#include <string>
#include <iostream>
#include <utility>
#include "Person.h"

class Employee: public Person{
private:
    std::string name;
    std::string cpf;
public:
    [[maybe_unused]] Employee(std::string name, std::string cpf);
};


#endif