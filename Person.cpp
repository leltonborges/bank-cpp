#include "Person.hpp"

Person::Person(std::string cpf, std::string name):
        cpf(std::move(cpf)),
        name(std::move(name)) {}

std::string Person::getName() const {
    return this->name;
}

std::string Person::getCpf() const {
    return this->cpf;
}
