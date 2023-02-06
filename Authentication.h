#ifndef BANK_AUTHENTICATION_H
#define BANK_AUTHENTICATION_H
#pragma once

#include <string>
#include <iostream>
#include <utility>

class Authentication {
private:
    std::string login;
    std::string pass;
public:
    Authentication(std::string login, std::string password);
    [[nodiscard]] bool authenticate() const;
};


#endif
