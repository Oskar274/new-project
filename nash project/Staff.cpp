#include "Staff.h"

void Staff::setBonus(float bonus)
{
    this->bonus = 0;
}

float Staff::getBonus() const
{
    return bonus ;
}

void Staff::show() const
{
    cout << "Name: " << name << endl;
    cout << "Position: " << position << endl;
    cout << "Salary: " << salary << endl;
    cout << "bonus: "  << bonus << endl;
    
    
}

string Staff::type() const
{
    return "Staff";
}

float Staff::calcSalary() const
{
    return salary*0.8+bonus ;
}
