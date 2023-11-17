#pragma once
#include "Emoloyee.h"
class OutStaff :
    public Employee
{
protected:
   
public:
    OutStaff();
    OutStaff(string name, string position, float salary );

   

    virtual void show() const override;
    virtual string type() const override;
    virtual float calcSalary()const override;
};

