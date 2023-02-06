#include "utils.hpp"

unsigned long randNum(const unsigned long limit, const unsigned int ranger) {
    std::srand((unsigned) time(NULL));
    return (rand() % limit) + ranger;
}