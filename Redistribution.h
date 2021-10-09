#ifndef ASSIGNMENT_REDISTRIBUTION_H
#define ASSIGNMENT_REDISTRIBUTION_H

#include "Account.h"
#include <vector>
#include "SavingsAccount.h"

class Redistribution{
private:
    double tenge;

public:
    vector<SavingsAccount*>accounts;
    Redistribution();
    Redistribution(double tenge);
    void redistribute(double tenge);
};

#endif
