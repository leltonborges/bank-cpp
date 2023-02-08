#include "AccountBank.hpp"
#include "CreditAccount.hpp"
#include "DebitAccount.hpp"
#include "Manager.hpp"
#include "utils.hpp"

using namespace std;

ostream &operator<<(ostream &osCout, const AccountBank &accountBank) {
    osCout << "Conta (Operador): " << accountBank.getAccount() << endl;
    osCout << "Titular (Operador): " << accountBank.owner.getName() << endl;
    osCout << "Documento (Operador): " << accountBank.owner.getCpf() << endl;
    osCout << "O saldo da conta (Operador): " << accountBank.getAmount() << endl;
    osCout << "O saldo taxa (Operador): " << accountBank.valueRate() << endl;
    return osCout;
}

int main() {

    OwnerAccount ownerAccount = OwnerAccount("Lelton", "1111");

    DebitAccount accountOne(OwnerAccount(string("Lelton"), string("1111")));
    CreditAccount creditAccount(OwnerAccount(string("Lia"), string("2222")));
    CreditAccount otherCreditAccount(OwnerAccount(string("Lelton"), string("3333")));

    (AccountBank &) creditAccount += 20;

    otherCreditAccount.deposit(100);
    creditAccount.deposit(10);
    cout << "Before " << endl;
    cout << "Origin creditAcount: " << endl;
    cout << creditAccount << endl;
    cout << "Origin otherCreditAcount: " << endl;
    cout << otherCreditAccount << endl;

    creditAccount += otherCreditAccount;

    cout << "After " << endl;
    cout << "Origin creditAcount: " << creditAccount.getAmount() << endl;
    cout << "Origin otherCreditAcount: " << otherCreditAccount.getAmount() << endl;

    accountOne.deposit(100);
    accountOne += 20;

    cout << "balace: " << accountOne.getAmount() << endl;

    auto variant = accountOne.withdrawPlusRate(520);
//    auto anAuto = std::get_if<double>(&variant);
    if (variant.index()) {
        cout << "Sacar: " << accountOne.getAmount() << endl;
    } else{
        cout << "Erro ao sacar: " << accountOne.getAmount() << endl;
    }

    cout << "balace: " << accountOne.getAmount() << endl;

    Manager manager("Lelton", "123", "login", "123", 5000, PaymentDay::SANDAY);

    if (manager.authenticate()) {
        cout << "Logado" << endl;
        cout << "Salary: " << manager.bonus() << endl;
    }
    return 0;
}
