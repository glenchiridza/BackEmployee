#include <iostream>
#include <stdexcept>
#include "basepluscommission.h"

using namespace std;

BaseCommEmployee::BaseCommEmployee(
const string &first, const string &last, const string &ssn,
double sales, double rate, double salary )
    :CommissionEmployee(first,last,ssn,sales,rate)
{
   setBaseSalary(salary);
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
cout << "base-salaried commission employee: " << firstName << ' '
<< lastName << "\nsocial security number: " << socialSecurityNumber
<< "\ngross sales: " << grossSales
<< "\ncommission rate: " << commissionRate
<< "\nbase salary: " << baseSalary;
}
