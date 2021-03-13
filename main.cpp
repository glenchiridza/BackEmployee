#include <iostream>
#include "commisionemployee.h"
#include <iomanip>
using namespace std;

int main()
{
    CommissionEmployee employee(
                "Glen","Cee","2323-2323-233",10000,.06);

    cout <<fixed <<setprecision(2);

    cout <<"Em Details: \n"
        <<"\nFirstName : "<<employee.getFirstName()
       <<"\nLast name : "<<employee.getLastName()
      <<"\nSSN : "<<employee.getSocialSecurityNumber()
     <<"\nGross Sale : "<<employee.getGrossSales()
    <<"\nCommisison rate : "<<employee.getCommission()
    <<endl;
    return 0;
}