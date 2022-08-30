#pragma once
#include "person.h"
class customer :
	public person
{
private:
	int _room_id;
	string _nationality;
public:
	
	void set_room_id(int room_id);
	void set_nationality(string nationality);
	void set_nationality();
	int get_room_id();
	string get_nationality();
};

