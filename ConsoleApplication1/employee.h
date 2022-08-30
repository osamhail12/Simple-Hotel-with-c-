#pragma once
#include "person.h"
class employee :public person
{
private:
	int _salary ;
	int _employee_id;

public:
	employee();
	void set_employee_id(int employee_id);
	int get_salary();
	int get_employee_id();
};

