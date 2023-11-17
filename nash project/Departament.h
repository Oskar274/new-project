#pragma once
#include"Emoloyee.h"
class Departament
{

protected:

	string name;
private:

	vector<Employee*> departament;

public:
	Departament();
	Departament(string name);
	

	void setName(string name);

	string getName()const;

	void show()const;
	void addEmployee(Employee* sotr);
	void deleteEmployee(int index);
	void findByCriteria(int criteria)const;


};

