#pragma once
#include "Emoloyee.h"
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
class Staff :
    public Employee
{
protected:
    float bonus;

private:
    Staff();
    Staff(string name, string position, float salary, float bonus);
    
    void setBonus(float bonus);
   

    float getBonus()const;
    

    virtual void show() const override;
    virtual string type()const override;
    virtual float calcSalary()const override;

};

