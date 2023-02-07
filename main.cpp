#include "AccountBank.hpp"
#include "CreditAccount.hpp"
#include "DebitAccount.hpp"
#include "Manager.hpp"

int main() {

    OwnerAccount ownerAccount = OwnerAccount("Lelton", "1111");

    DebitAccount accountOne(OwnerAccount(std::string("Lelton"), std::string("1111")));

    accountOne.deposit(100);
    accountOne.withdrawPlusRate(10);

    std::cout << "balace: " << accountOne.getAmount() << std::endl;
    try {
        accountOne.withdrawPlusRate(10);

    } catch (std::invalid_argument const &ex) {
        std::cout << "Message: " << ex.what() << std::endl;
    }

    std::cout << "balace: " << accountOne.getAmount() << std::endl;

    Manager manager("Lelton", "123", "login", "123", 5000, PaymentDay::SANDAY);

    if (manager.authenticate()) {
        std::cout << "Logado" << std::endl;
        std::cout << "Salary: " << manager.bonus() << std::endl;
    }
    return 0;
}
