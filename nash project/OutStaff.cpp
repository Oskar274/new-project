#include "OutStaff.h"

OutStaff::OutStaff()
{
}

OutStaff::OutStaff(string name, string position, float salary)
{
}

void OutStaff::show() const
{
    cout << "Name: " << name << endl;
    cout << "Salary" << salary << endl;
    cout << "Position" << position << endl;
}

string OutStaff::type() const
{
    return "OutStaff";
}

float OutStaff::calcSalary() const
{
    return salary*0.8;
}
