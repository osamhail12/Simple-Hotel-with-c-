#include "person.h"



void person::set_name(string name){
	_name = name;
}
void person::set_id_card() {
	char id_card[256];
	do{
	cout << "\n\n\t\t\t\tPlease Enter the id card  : ";
	cin >> id_card;
	if (digit(id_card))
		_id_card = id_card;
	else
	cout << "\n\n\t\t\t\tPlease Enter Correct Id Card .....\n";
	} while (!digit(id_card));

}
bool person::digit(char* a) {
	for (int i = 0; a[i]!='\0'; i++)
		if (!isdigit(a[i]))
			return false;
	return true;
}
void person::set_id_card(long id_card)
{
	_id_card = id_card;
}
string person::get_name()
{
	return _name;
}
string person::get_id_card()
{
	return _id_card;
}
