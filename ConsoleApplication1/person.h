#pragma once
#include<string>
#include<iostream>
#include<cctype>
using namespace std;
class person
{
private:
	string _name;
	string _id_card;
public:
	void set_name(string name);
	void set_id_card();
	void set_id_card(long _id_card);
	string get_name();
	string get_id_card();
	bool digit(char* a);
	
};

