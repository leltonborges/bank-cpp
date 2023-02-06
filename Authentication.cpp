#include "Authentication.hpp"

#include <utility>

Authentication::Authentication(std::string login, std::string password):
        login(std::move(login)), pass(std::move(password)) {}

bool Authentication::authenticate() const {
    bool isPass = std::equal(this->pass.begin(), this->pass.end(), "123");
    bool isLogin = std::equal(this->login.begin(), this->login.end(), "login");
    return isPass && isLogin;
}
