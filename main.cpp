#include "AccountBank.hpp"
#include "CreditAccount.hpp"
#include "DebitAccount.hpp"
#include "Manager.hpp"

int main() {

    OwnerAccount ownerAccount = OwnerAccount("Lelton", "1111");

    DebitAccount accountOne(OwnerAccount(std::string("Lelton"), std::string("1111")));
    CreditAccount creditAccount(OwnerAccount(std::string("Lia"), std::string("2222")));
    CreditAccount otherCreditAccount(OwnerAccount(std::string("Lelton"), std::string("3333")));

    (AccountBank &) creditAccount += 20;

    otherCreditAccount.deposit(100);
    creditAccount.deposit(10);
    std::cout << "Before " << std::endl;
    std::cout << "Origin creditAcount: " << creditAccount.getAmount() << std::endl;
    std::cout << "Origin otherCreditAcount: " << otherCreditAccount.getAmount() << std::endl;

    creditAccount += otherCreditAccount;

    std::cout << "After " << std::endl;
    std::cout << "Origin creditAcount: " << creditAccount.getAmount() << std::endl;
    std::cout << "Origin otherCreditAcount: " << otherCreditAccount.getAmount() << std::endl;


    accountOne.deposit(100);
    accountOne += 20;

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
