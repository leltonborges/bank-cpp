//
// Created by leltonborges on 04/02/23.
//

#ifndef BANK_PERSON_H
#define BANK_PERSON_H

#include <string>
#include <iostream>
#include <utility>

class Person {
private:
    std::string cpf;
    std::string name;

public:
    Person() = delete;

    Person(std::string cpf, std::string name);

    [[nodiscard]] std::string getName() const;

    [[nodiscard]] std::string getCpf() const;
};


#endif //BANK_PERSON_H
