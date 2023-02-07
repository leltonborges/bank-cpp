#ifndef BANK_OWNERACCOUNT_HPP
#define BANK_OWNERACCOUNT_HPP
#pragma  once

#include <iostream>
#include <string>
#include "Person.hpp"

class OwnerAccount :
        public Person {
public:
    explicit OwnerAccount(std::string name, std::string cpf);
};

#endif //BANK_OWNERACCOUNT_HPP
