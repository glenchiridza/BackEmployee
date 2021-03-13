#include <stdexcept>
#include "commisionemployee.h"
using namespace std;


CommissionEmployee::CommissionEmployee(
        const string &first, const string &last, const string &ssn,
        double sales, double rate)
{
    firstName = first;
    lastName = last;
    socialSecurityNumber = ssn;
    setGrossSales(sales);
    setCommission(rate);
}

void CommissionEmployee::setFirstName(const string &first)
{
    firstName = first;
}

string CommissionEmployee::getFirstName() const
{
    return firstName;
}

void CommissionEmployee::setLastName(const string &last)
{
    lastName = last;
}

string CommissionEmployee::getLastName() const
{
    return lastName;
}

void CommissionEmployee::setSocialSecurityNumber(const string &ssn)
{
    socialSecurityNumber = ssn;
}

string CommissionEmployee::getSocialSecurityNumber() const
{
    return socialSecurityNumber;
}

void CommissionEmployee::setGrossSales(double sales)
{
    if (sales >=0.0)
        grossSales = sales;
    else
        throw invalid_argument("Gross sales invalid, maintain a value of >=0.0");
}

double CommissionEmployee::getGrossSales() const
{
    return grossSales;
}

void CommissionEmployee::setCommission(double rate)
{
    if( rate> 0.0 && rate <1.0)
        commissionRate = rate;
    else throw invalid_argument("Commission rate must exceeed 0.0 and not more than 1.0");
}

double CommissionEmployee::getCommission() const
{
    return commissionRate;
}

double CommissionEmployee::earnings() const
{
    return commissionRate * grossSales;
}

void CommissionEmployee::print() const
{
    cout <<"commission employee: "<< firstName<< ' '<<lastName
        <<"\nsocial security num: "<<socialSecurityNumber
       <<"\ngross sales: "<<grossSales
      <<"\ncommission rate: "<<commissionRate;
}



