#include "DebitAccount.h"

DebitAccount::~DebitAccount() = default;

double DebitAccount::valueRate() const {
    return 1.03;
}

DebitAccount::DebitAccount(OwnerAccount ownerAccount):
        AccountBank(ownerAccount) {

}
