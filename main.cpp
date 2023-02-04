#include "bank.h"

int main() {

    OwnerAccount ownerAccount = OwnerAccount("Lelton", "1111");

    AccountBank accountOne(OwnerAccount(std::string("Lelton"), std::string("1111")));

    std::cout << "balace: " << accountOne.getAmount() << std::endl;
    try {
        accountOne.withdraw(10);

    } catch (std::invalid_argument const &ex) {
        std::cout << "Message: " << ex.what() << std::endl;
    }

    std::cout << "balace: " << accountOne.getAmount() << std::endl;
    return 0;
}
