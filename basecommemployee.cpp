#include <iostream>
#include <stdexcept>
#include "basepluscommission.h"

using namespace std;

BaseCommEmployee::BaseCommEmployee(
const string &first, const string &last, const string &ssn,
double sales, double rate, double salary )
{
    fName = first;
    lName = last;
    this->ssn = ssn;
    setGrossSales(sales);
    setCommissionRate(rate);
    setBaseSalary(salary);
}


void BaseCommEmployee::setFirstName( const string &first )
{
fName = first;
}

string BaseCommEmployee::getFirstName() const
{

    return fName;
}

void BaseCommEmployee::setLastName( const string &last )
{
lastName = last;
}
string BaseCommEmployee::getLastName() const
{
return lastName;
}

// set social security number
void BaseCommEmployee::setSocialSecurityNumber(
const string &ssn )
{
this->ssn = ssn;
}

// return social security number
string BaseCommEmployee::getSocialSecurityNumber() const
{
return this->ssn;
} //

// set gross sales amount
void BaseCommEmployee::setGrossSales( double sales )
{
if ( sales >= 0.0 )
    grossSales = sales;
else
    throw invalid_argument( "Gross sales must be >= 0.0" );
}

// return gross sales amount
double BaseCommEmployee::getGrossSales() const
{
return grossSales;
} // end function getGrossSales

// set commission rate
void BaseCommEmployee::setCommissionRate( double rate )
{
if ( rate > 0.0 && rate < 1.0 )
    commissionRate = rate;
else
    throw invalid_argument( "Commission rate must be > 0.0 and < 1.0" );
} //


double BaseCommEmployee::getCommissionRate() const
{
return commissionRate;
}

// set base salary
void BaseCommEmployee::setBaseSalary( double salary )
{
if ( salary >= 0.0 )
    baseSalary = salary;
else
    throw invalid_argument( "Salary must be >= 0.0" );
}

// return base salary
double BaseCommEmployee::getBaseSalary() const
{
return baseSalary;
}

// calculate earnings
double BaseCommEmployee::earnings() const
{
return baseSalary + ( commissionRate * grossSales );
}

// print BasePlusCommissionEmployee object
void BaseCommEmployee::print() const
{
cout << "base-salaried commission employee: " << fName << ' '
<< fName << "\nsocial security number: " << this->ssn
<< "\ngross sales: " << grossSales
<< "\ncommission rate: " << commissionRate
<< "\nbase salary: " << baseSalary;
}
