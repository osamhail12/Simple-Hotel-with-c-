#pragma once
class hotel
{
private:
	int number_room_empty;
	int number_cust;
	int number_emp;
public:
	hotel();
	void set_number_emp();
	void set_number_cust();
	void set_number_room_empty();
	void set_number_cust_del();
	void set_number_room_empty_del();
	int get_number_emp();
	int get_number_cust();
	int get_number_room_empty();
};

