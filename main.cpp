#include "bank.h"

int main() {
    AccountBank accountBank1("Lelton", "1111");

    std::cout << "balace: " << accountBank1.getAmount() << std::endl;
    try {
        accountBank1.withdraw(10);

    } catch (std::invalid_argument const &ex) {
        std::cout << "Message: " << ex.what() << std::endl;
    }

    std::cout << "balace: " << accountBank1.getAmount() << std::endl;
    return 0;
}
