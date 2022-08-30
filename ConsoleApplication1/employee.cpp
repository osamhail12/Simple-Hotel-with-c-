#include "employee.h"

employee::employee()
{
	_salary = 5000;
}



void employee::set_employee_id(int employee_id)
{
	_employee_id = employee_id;
}

int employee::get_salary()
{
	return _salary;
}

int employee::get_employee_id()
{
	return _employee_id;
}
