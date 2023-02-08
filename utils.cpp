#include "utils.hpp"

unsigned long randNum(const unsigned long limit, const unsigned int ranger) {
    std::srand((unsigned) time(NULL));
    return (rand() % limit) + ranger;
}

std::optional<std::string> readFile(const std::string &filePath){
    std::optional<std::string> vazio = {};

    vazio->operator+=("sd");
    return  vazio;
}