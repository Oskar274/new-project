#include "Emoloyee.h"

Employee::Employee()
{
	this->name = "undefind";
	this->position = "none: ";
	this->salary = 0;
}

Employee::Employee(string name, string position, float salary)
{
	this->name = name;
	this->position = position;
	this->salary = salary;
}

Employee::~Employee()
{

}

void Employee::setName(string name)
{
	this->name = name;
}

void Employee::setPosition(string position)
{
	this->position = position;
}

void Employee::setSalary(float salary)
{
	this->salary = salary;
}

string Employee::getName() const
{
	return name;
}

string Employee::getPosition() const
{
	return position;
}

float Employee::getSalary() const
{
	return salary;
}
