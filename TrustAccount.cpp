#include "cmake-build-debug/TrustAccount.h"

double TrustAccount::getBonus() const {
    return bonus;
}

void TrustAccount::setBonus(double bonus) {
    TrustAccount::bonus = bonus;
}

void TrustAccount::setBonusForDollars(int bonusForDollars) {
    TrustAccount::bonusForDollars = bonusForDollars;
}

void TrustAccount::setBonusForEuros(int bonusForEuros) {
    TrustAccount::bonusForEuros = bonusForEuros;
}

void TrustAccount::setBonusForTenge(int bonusForTenge) {
    TrustAccount::bonusForTenge = bonusForTenge;
}

int TrustAccount::getBonusForDollars() const {
    return bonusForDollars;
}

int TrustAccount::getBonusForEuros() const {
    return bonusForEuros;
}

int TrustAccount::getBonusForTenge() const {
    return bonusForTenge;
}

TrustAccount::TrustAccount() : bonus(0), bonusForDollars(10), bonusForEuros(10), bonusForTenge(10) {}

void TrustAccount::withdraw(int cash, string currency){};

    void TrustAccount::deposit(string currency){
        if (currency == "dollars" || currency == "dollar") {
            if (getDollars()>=1000){
                TrustAccount::setDollars(  getDollars() * (1.0 + (double(getInterestRateForDollars()) / 100.0)));
                TrustAccount::setBonus(getBonus()+getBonusForDollars());
            }
            else
            TrustAccount::setDollars(getDollars() * (1.0 + (double(getInterestRateForDollars()) / 100.0)));
        }
    if (currency=="euros" || currency=="euro") {
        if (getEuros()>=1000){
            TrustAccount::setEuros(  getEuros() * (1.0 + (double(getInterestRateForEuros()) / 100.0)));
            TrustAccount::setBonus(getBonus()+getBonusForEuros());
        }
        else
            TrustAccount::setEuros(getEuros() * (1.0 + (double(getInterestRateForEuros()) / 100.0)));
    }
    if (currency=="tenges" || currency=="tenge") {
        if (getTenge()>=1000){
            TrustAccount::setTenge(  getTenge() * (1.0 + (double(getInterestRateForTenge()) / 100.0)));
            TrustAccount::setBonus(getBonus()+getBonusForTenge());
        }
        else
            TrustAccount::setTenge(getTenge() * (1.0 + (double(getInterestRateForTenge()) / 100.0)));
    }
}