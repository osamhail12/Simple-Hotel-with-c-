#include "hotel.h"

hotel::hotel()
{
	 number_room_empty = 100;
	 number_cust = 0;
	 number_emp = 0;
}

void hotel::set_number_emp()
{
	number_emp++;
}

void hotel::set_number_cust()
{
	number_cust++;
}

void hotel::set_number_cust_del()
{
	number_cust--;
}

void hotel::set_number_room_empty()
{
	number_room_empty--;
}

void hotel::set_number_room_empty_del()
{
	number_room_empty++;
}

int hotel::get_number_emp()
{
	return number_emp;
}

int hotel::get_number_cust()
{
	return number_cust;
}

int hotel::get_number_room_empty()
{
	return number_room_empty;
}
