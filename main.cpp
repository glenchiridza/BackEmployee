#include <iostream>
#include "commisionemployee.h"
#include "basepluscommission.h"
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

    //The derived class, inheriting from base class (CommissionEmployee)

    BaseCommEmployee employ("Glen","Chiridza","123-134-5444",6000,.03,300);
    cout <<fixed << setprecision(2);

    cout <<"Em Details: \n"
        <<"\nFirstName : "<<employ.getFirstName()
       <<"\nLast name : "<<employ.getLastName()
      <<"\nSSN : "<<employ.getSocialSecurityNumber()
     <<"\nGross Sale : "<<employ.getGrossSales()
    <<"\nCommisison rate : "<<employ.getCommission()
    <<endl;



    return 0;
}
