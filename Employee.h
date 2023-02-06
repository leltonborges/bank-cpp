#ifndef BANK_EMPLOYEE_H
#define BANK_EMPLOYEE_H
#pragma  once

#include <string>
#include <iostream>
#include <utility>
#include "Person.h"

class Employee : public Person {
private:
    std::string name{};
    std::string cpf{};
    float salary{};
public:
    explicit Employee(std::string name, std::string cpf, float salary);

    virtual float bonus() const = 0;

    [[nodiscard]] float getSalary() const;

};


#endif