#include "Departament.h"

void Departament::setName(string name)
{
	this->name = name;
}

string Departament::getName() const
{
	return name;
}

void Departament::show() const
{
	for (int i = 0; i < departament.size(); i++)
	{
		departament[i]->show();
	}
}

void Departament::addEmployee(Employee* sotr)
{
	departament.push_back(sotr);
}

void Departament::deleteEmployee(int index)
{
	for (int i = 0; i < departament.size(); i++)
	{
		if (index-1 == i)
		{
			departament.erase(departament.begin() + i);
			cout << "deleted: " << endl;
		}
	}
}

void Departament::findEmployee() const
{
}
