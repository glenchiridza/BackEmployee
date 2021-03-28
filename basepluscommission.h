#ifndef BASEPLUSCOMMISSION_H
#define BASEPLUSCOMMISSION_H


#include <string>
#include <iostream>
#include "commisionemployee.h"

class BaseCommEmployee : public CommissionEmployee
{
public:
    BaseCommEmployee(const string &, const string &, const string &,
                     double=0.0,double=0.0,double=0.0);


    void setBaseSalary(double);
    double getBaseSalary()const;

    double earnings() const;
    void print() const;

private:
    double baseSalary;

};


#endif // BASEPLUSCOMMISSION_H
