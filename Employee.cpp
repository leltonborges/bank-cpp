#include "Employee.h"

[[maybe_unused]] Employee::Employee(std::string name, std::string cpf, float salary):
Person(std::move(cpf), std::move(name)), salary(salary) {}

float Employee::getSalary() const {
    return this->salary;
}
