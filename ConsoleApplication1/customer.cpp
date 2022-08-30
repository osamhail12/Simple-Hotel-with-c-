#include "customer.h"




void customer::set_room_id(int room_id)
{
	_room_id = room_id;
}

void customer::set_nationality(string nationality)
{
	_nationality = nationality;
}

void customer::set_nationality()
{
	string nationality;
		cin >> nationality;
			_nationality = nationality;



}

int customer::get_room_id()
{
	return _room_id;
}

string customer::get_nationality()
{
	return _nationality;
}
