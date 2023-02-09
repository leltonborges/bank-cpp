#ifndef BANK_UTILS_HPP
#define BANK_UTILS_HPP

#include <ctime>
#include <cstdlib>
#include <iostream>
#include <optional>
#include <utility>

template<typename T>
T menor(T type1, T type2) {
    return type1 < type2 ? type1 : type2;
}

template<typename T>
class Pessoa {
private:
    T document;
    std::string name{};
public:
    Pessoa(T document, std::string name):
            document(document),
            name(std::move(name)) {}

    [[nodiscard]] T getDocument() const {
        return this->document;
    }

    [[nodiscard]] std::string getName() const {
        return this->name;
    }
};

class Funcionario :
        public Pessoa<std::string> {
public:
    explicit Funcionario(std::string document, std::string name);
};

template<int percentualTarifa>
class Conta {
public:
    float getValue(float balance) {
        return balance * percentualTarifa;
    }
};

class ContaCorrente :
        public Conta<5> {

};

unsigned long randNum(unsigned long limit, unsigned int ranger = 0);

#endif //BANK_UTILS_HPP
