#ifndef WEEK4_TRUSTACCOUNT_H
#define WEEK4_TRUSTACCOUNT_H


#include "SavingsAccount.h"

class TrustAccount : public SavingsAccount{
private:
    double bonus;                              //the amount of bonus the user have

    int bonusForDollars;                    //the amount of bonus for deposit more than 1000
    int bonusForEuros;                      //the amount of bonus for deposit more than 1000
    int bonusForTenge;                      //the amount of bonus for deposit more than 1000
public:
    void deposit(string currency);                  //function that increases money by some interest

    void withdraw(int cash, string currency);

    void setBonus(double bonus);

    void setBonusForDollars(int bonusForDollars);

    void setBonusForEuros(int bonusForEuros);

    void setBonusForTenge(int bonusForTenge);

    TrustAccount();

    double getBonus() const;

    int getBonusForDollars() const;

    int getBonusForEuros() const;

    int getBonusForTenge() const;

};


#endif //WEEK4_TRUSTACCOUNT_H
