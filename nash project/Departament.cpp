#include "Departament.h"

Departament::Departament()
{
    this->name = "none";
}

Departament::Departament(string name)
{
    this->name = name;
}

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

void Departament::findByCriteria(int criteria) const
{
    string type;
    string name;
    string position;
    float salary;
    cin.ignore();

    switch (criteria)
    {
    case 1:
        getline(cin, type);
        for (int i = 0; i < departament.size(); i++)
        {
            if (departament[i]->type() == type)
            {
                departament[i]->show();
            }
        }
        break;

    case 2:
        getline(cin, name);
        for (int i = 0; i < departament.size(); i++)
        {
            if (departament[i]->getName() == name)
            {
                departament[i]->show();
            }
        }
        break;

    case 3:
        getline(cin, position);
        for (int i = 0; i < departament.size(); i++)
        {
            if (departament[i]->getPosition() == position)
            {
                departament[i]->show();
            }
        }
        break;

    case 4:
        for (int i = 0; i < departament.size(); i++)
        {
            if (departament[i]->getSalary() == salary)
            {
                departament[i]->show();
            }
        }
        break;

    default:
        break;
    }
}


