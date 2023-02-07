#ifndef BANK_EMPLOYEE_HPP
#define BANK_EMPLOYEE_HPP
#pragma  once

#include <string>
#include <iostream>
#include <utility>
#include "Person.hpp"

enum class PaymentDay :
        unsigned short int {
    MONDAY = 1, TUESDAY = 2, WEDNESDAY = 3, THURSDAY = 4, FRIDAY = 5, SATURDAY = 6, SANDAY = 7
};

class Employee :
        public Person {
private:
    std::string name{};
    std::string cpf{};
    float salary{};
    PaymentDay payDay{};
public:
    explicit Employee(std::string name, std::string cpf, float salary, PaymentDay payDay);

    [[nodiscard]] virtual float bonus() const = 0;

    [[nodiscard]] float getSalary() const;

    [[nodiscard]] PaymentDay getPayDay() const;

};


#endif