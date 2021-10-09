#include <iostream>
#include <vector>
#include "SavingsAccount.h"
#include "CheckingAccount.h"
#include "TrustAccount.h"
#include "I_Printable.h"
#include "Redistribution.h"
#include "Account.h"

using namespace std;

int main() {


    I_Printable printable = *new I_Printable();

    Redistribution *redis = new Redistribution();

    SavingsAccount savingsAccount = SavingsAccount();
    savingsAccount.setTenge(100);
    savingsAccount.deposit("tenge");
    savingsAccount.deposit("tenge");


    redis->accounts.push_back(&savingsAccount);


    SavingsAccount savingsAccount1 = SavingsAccount();
    savingsAccount.setTenge(200);
    savingsAccount.deposit("dollar");
    savingsAccount.deposit("dollar");

    redis->accounts.push_back(&savingsAccount1);

    cout<<"Deposit" << "\n";
    cout<<"\n";
    printable.print(savingsAccount);
    printable.print(savingsAccount1);


    redis->redistribute(1000);
    cout<<"\n";
    cout<<"After the redistribution" <<"\n";
    cout<<"\n";
    printable.print(savingsAccount);
    printable.print(savingsAccount1);


    CheckingAccount checkingAccount = CheckingAccount();
    checkingAccount.setEuros(1000);
    checkingAccount.withdraw(50, "euro");

    TrustAccount trustAccount = TrustAccount();
    trustAccount.setEuros(1000);
    trustAccount.deposit("euro");

    trustAccount.deposit("euro");

    return 0;
}}