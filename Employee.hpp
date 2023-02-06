#ifndef BANK_EMPLOYEE_HPP
#define BANK_EMPLOYEE_HPP
#pragma  once

#include <string>
#include <iostream>
#include <utility>
#include "Person.hpp"

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