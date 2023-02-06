cmake_minimum_required(VERSION 3.24)
project(bank)

set(CMAKE_CXX_STANDARD 23)

add_executable(bank main.cpp AccountBank.cpp AccountBank.hpp OwnerAccount.cpp OwnerAccount.hpp utils.cpp utils.hpp Employee.cpp Employee.hpp Person.cpp Person.hpp CreditAccount.cpp CreditAccount.hpp DebitAccount.cpp DebitAccount.hpp Cashier.cpp Cashier.hpp Manager.cpp Manager.hpp Authentication.cpp Authentication.hpp)
