cmake_minimum_required(VERSION 3.24)
project(bank)

set(CMAKE_CXX_STANDARD 23)

add_executable(bank main.cpp AccountBank.cpp AccountBank.h OwnerAccount.cpp OwnerAccount.h utils.cpp utils.h Employee.cpp Employee.h Person.cpp Person.h CreditAccount.cpp CreditAccount.h DebitAccount.cpp DebitAccount.h)
