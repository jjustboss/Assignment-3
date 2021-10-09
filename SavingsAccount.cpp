#include "cmake-build-debug/SavingsAccount.h"

SavingsAccount::SavingsAccount(): interestRateForDollars(10), interestRateForEuros(10), interestRateForTenge(10){}

void SavingsAccount::deposit(string currency){
    if (currency=="dollars" || currency=="dollar"){
    SavingsAccount::setDollars(getDollars() * (1.0+(double(interestRateForDollars)/100.0)) );
    }
    if (currency=="euros" || currency=="euro") {
        SavingsAccount::setEuros(getEuros() * (1.0 + (double(interestRateForEuros) / 100.0)));
    }
    if (currency=="tenges" || currency=="tenge") {
        SavingsAccount::setTenge(getTenge() * (1.0+(double(interestRateForTenge)/100.0)) );
    }
}
void SavingsAccount::withdraw(int cash, string currency){}

int SavingsAccount::getInterestRateForDollars() const {
    return interestRateForDollars;
}
int SavingsAccount::getInterestRateForEuros() const {
    return interestRateForEuros;
}
int SavingsAccount::getInterestRateForTenge() const {
    return interestRateForTenge;
}

void SavingsAccount::setInterestRateForDollars(int interestRateForDollars) {
    SavingsAccount::interestRateForDollars = interestRateForDollars;
}
void SavingsAccount::setInterestRateForEuros(int interestRateForEuros) {
    SavingsAccount::interestRateForEuros = interestRateForEuros;
}
void SavingsAccount::setInterestRateForTenge(int interestRateForTenge) {
    SavingsAccount::interestRateForTenge = interestRateForTenge;
}
