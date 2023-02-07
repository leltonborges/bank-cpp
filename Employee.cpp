#include "Employee.hpp"

[[maybe_unused]] Employee::Employee(std::string name, std::string cpf, float salary, PaymentDay payDay):
        Person(std::move(cpf), std::move(name)),
        salary(salary),
        payDay(payDay) {}

float Employee::getSalary() const {
    return this->salary;
}

PaymentDay Employee::getPayDay() const {
    return this->payDay;
}
