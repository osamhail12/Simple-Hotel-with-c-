#include<iostream>
#include<string>
#include"employee.h"
#include"customer.h"
#include"hotel.h"
using namespace std;

void name_hotel();
void employee_hotel(employee emp[], hotel &hote);
void set_employee(employee emp[], hotel &hote);
void get_employee(employee emp[], hotel hote);
void set_customer(customer cust[], hotel &hote);
void get_customer_by_id_card(customer cust[], hotel hote);
void get_customer(customer cust[], hotel hote);
void get_customrt_to_modify(customer cust[], hotel &hote);
void get_ResultProfit(hotel hote);
void about();


int main() {
	employee emp[10];
	customer cust[100];
	hotel hote;
	employee_hotel(emp,hote);
	int options;
	do {
		system("cls");
		name_hotel();
		cout << "\t\t\t\t\t Enter Your Choose : ";
		cin >> options;
		//cout << "\a";
		switch (options)
		{
		case 1: {system("cls"); set_employee(emp, hote); system("pause"); } break;
		case 2: {system("cls"); get_employee(emp, hote); system("pause"); } break;
		case 3: {system("cls"); set_customer(cust, hote); system("pause"); } break;
		case 4: {system("cls"); get_customer(cust, hote); system("pause"); } break;
		case 5: {system("cls"); get_customer_by_id_card(cust, hote); system("pause"); } break;
		case 6: {system("cls"); get_customrt_to_modify(cust, hote); system("pause"); } break;
		case 7: {system("cls"); get_ResultProfit(hote); system("pause"); } break;
		case 8: {system("cls"); about(); system("pause"); } break;
		case 0: system("exit"); break;
		default: system("cls"); break;
		}
	} while (options != 0);


}

void name_hotel() {
	cout << "\t\t******************************************************************************\n";
	cout << "\t\t******************************************************************************\n";
	cout << "\t\t***                          welcome To Hotel                              ***\n";
	cout << "\t\t***           AAAAA              OOOOOOOO         MMMM            MMMM     ***\n";
	cout << "\t\t***         AAA   AAA        OOO          OOO     MMM MM        MM MMM     ***\n";
	cout << "\t\t***        AAA     AAA      OO               OO   MMM  MM      MM  MMM     ***\n";
	cout << "\t\t***       AAA       AAA    OO                 OO  MMM   MMM  MMM   MMM     ***\n";
	cout << "\t\t***      AAAAAAAAAAAAAAA  OO                   OO MMM      MM      MMM     ***\n";
	cout << "\t\t***     AAA           AAA  OO                 OO  MMM              MMM     ***\n";
	cout << "\t\t***    AAA             AAA  OO               OO   MMM              MMM     ***\n";
	cout << "\t\t***   AAA               AAA   OOO          OOO    MMM              MMM     ***\n";
	cout << "\t\t***  AAA                 AAA      OOOOOOOOO     MMMMMMM          MMMMMMM   ***\n";
	cout << "\t\t***                                                                        ***\n";
	cout << "\t\t***     Press 1 To Enter Employees.                                        ***\n";
	cout << "\t\t***                                                                        ***\n";
	cout << "\t\t***     Press 2 To Show The Employees list.                                ***\n";
	cout << "\t\t***                                                                        ***\n";
	cout << "\t\t***     Press 3 To Enter Customers.                                        ***\n";
	cout << "\t\t***                                                                        ***\n";
	cout << "\t\t***     Press 4 To Show The Costomers list.                                ***\n";
	cout << "\t\t***                                                                        ***\n";
	cout << "\t\t***     Press 5 To Search by Id Card.                                      ***\n";
	cout << "\t\t***                                                                        ***\n";
	cout << "\t\t***     Press 6 To Modify or Delet Data.                                   ***\n";
	cout << "\t\t***                                                                        ***\n";
	cout << "\t\t***     Press 7 To Show Result Profit.                                     ***\n";
	cout << "\t\t***                                                                        ***\n";
	cout << "\t\t***     Press 8 To know Abou Us.                                           ***\n";
	cout << "\t\t***                                                                        ***\n";
	cout << "\t\t***     Press 0 To Exit.                                                   ***\n";
	cout << "\t\t***                                                                        ***\n";
	cout << "\t\t******************************************************************************\n";
	cout << "\t\t******************************************************************************\n";
}

void employee_hotel(employee emp[], hotel &hote) {
	emp[0].set_name("salah");
	emp[1].set_name("mohammed");
	emp[2].set_name("ali");
	emp[3].set_name("saleh");
	emp[4].set_name("khaled");
	emp[0].set_id_card(001240);
	emp[1].set_id_card(076644);
	emp[2].set_id_card(054536);
	emp[3].set_id_card(045456);
	emp[4].set_id_card(011200);

	for (int i = 0; i < 5; i++) { emp[i].set_employee_id(i + 1); hote.set_number_emp(); }
}


void set_employee(employee emp[],hotel &hote){
	string name;
	char exit;
	long id_card;
	int i = hote.get_number_emp();//i=5
	for ( i ;i<10;i++)
	{
		cout << "\n\n\t\t\t\tEnter y to Add New Employee or Press any key to Exit ";
		cin >> exit;
		if (exit == 'y') {
			cout << "\n\n\t\t\t\tEnter The Employee Name " << i + 1 << " : ";
			cin >> name;
			emp[i].set_employee_id(i + 1);
			emp[i].set_name(name);
			emp[i].set_id_card();//loop to take the values from user  if(value > 0 )
			hote.set_number_emp();
			system("cls");
		}
		else
			break;

	}
			
}

void get_employee(employee emp[], hotel hote) {
	for (int i = 0; i < hote.get_number_emp(); i++) {
		cout << "\n\n\t\t\t***** Employee Number  " << ": " << emp[i].get_employee_id();
		cout << "\n\n\t\t\t***** Name of Employee " << ": " << emp[i].get_name();
		cout << "\n\n\t\t\t***** Employee Id Card " << ": " << emp[i].get_id_card();
		cout << "\n\n\t\t\t***** Employee Salary  " << ": " << emp[i].get_salary();
		cout << "\n\n\t\t\t**********************************************************************************";
		cout << "\n\n\t\t\t\t*****************************************************************************";
	}
		cout << "\n\n\t\t\t\t The sumation of the salaries is  :  " << hote.get_number_emp()*5000;
		cout << "\n\n\t\t\t\t The Number of employees is  :  " << hote.get_number_emp() ;
		cout << "\n\n\t\t\t\t";
}

void set_customer(customer cust[], hotel &hote) {
	string name;
	char exit;
	bool x = false;
	for (hote.get_number_cust(); hote.get_number_cust() < 100  ; hote.set_number_cust()) {
		cout << "\n\n\t\t\t\tEnter y to Add New Customer or Press any key to Exit ";
		cin >> exit;
		if (exit == 'y') {
			cout << "\n\n\t\t\t\tThe Number of Room : " << hote.get_number_cust()+1;
			cust[hote.get_number_cust()].set_room_id(hote.get_number_cust() + 1);
			cout << "\n\n\t\t\t\tEnter The Customer Name  : ";
			cin >> name;
			cust[hote.get_number_cust()].set_name(name);
			cout << "\n\n\t\t\t\tEnter The Customer Nationality  : ";
			cust[hote.get_number_cust()].set_nationality();
			do {
				cust[hote.get_number_cust()].set_id_card();//loop to take the values from user  if(value > 0 )
				for (int i = 0; i < hote.get_number_cust(); i++) {
					if (cust[i].get_id_card() == cust[hote.get_number_cust()].get_id_card()) {
						cout << "\n\n\t\t\t\tWe Heve Customer That Has The same Id Card : \n";
						x = true;
						break;
					}
					else
						x = false;
				}
			} while (x);
			hote.set_number_room_empty();
			cout << "\n\n\t\t\t\t*****************************************************************************";
			system("cls");
		}
		else
			break;
	}
}

void get_customer_by_id_card(customer cust[], hotel hote)
{
	string id_card;
	bool x=true;
	cout << "\n\n\t\t\t***** Enter The ID Card : ";
	cin >> id_card;
	for (int i = 0; i < hote.get_number_cust(); i++) {
		if (id_card == cust[i].get_id_card()) {
			cout << "\n\n\t\t\t***** Room Number : " << cust[i].get_room_id();
			cout << "\n\n\t\t\t***** Name of Customer : " << cust[i].get_name();
			cout << "\n\n\t\t\t***** Customer Id Card : " << cust[i].get_id_card();
			cout << "\n\n\t\t\t***** Customer Nationality : " << cust[i].get_nationality();
			cout << "\n\n\t\t\t*********************************************************************************************\n";
			cout << "\n\n\t\t\t********************************************************************************************\n";
			x = false;
		}

	}
	if(x)
		cout << "\n\n\t\t\tThe Id Card is not founded ....\n";
}

void get_customer(customer cust[], hotel hote) {
	for (int i = 0; i < hote.get_number_cust(); i++) {
		cout << "\n\n\t\t\t***** Room Number : " << cust[i].get_room_id();
		cout << "\n\n\t\t\t***** Name of Customer : " << cust[i].get_name();
		cout << "\n\n\t\t\t***** Customer Id Card : " << cust[i].get_id_card();
		cout << "\n\n\t\t\t***** Customer Nationality : " << cust[i].get_nationality();
		cout << "\n\n\t\t\t*********************************************************************************************\n";
		cout << "\n\n\t\t\t********************************************************************************************\n";
	}
	cout << "\n\n\t\t\t\t The Number of Empty Rooom : " << hote.get_number_room_empty();
	cout << "\n\n\t\t\t\t The Number of Customer : " << hote.get_number_cust();
	cout << "\n\n\t\t\t\t";
}

void get_customrt_to_modify(customer cust[], hotel &hote) {
	int number;
	string name;
	int counter = 0;
	bool x = true;
	do {
		
		if (counter == 3) {
			cout << "\n\n\t\t\t\tTry again . . .\n";
			x = false;
			break;
			
		}
			cout << "\n\n\t\t\t\tEnter The room's Number to modify or delete The Data : ";
			cin >> number;
			number--;
			counter++;
			if ((number <= hote.get_number_cust())) {
				x = true;
		    }
	} while (number >= hote.get_number_cust());
	char option;
	if (x) {

		cout << "\n\n\t\t\t\tEnter  x for delete The Data or Enter y to modify The Data: ";
		cin >> option;

		switch (option) {
		case 'y': { 
			cout << "\n\n\t\t\t\t\t\t The Old Data :";
			cout << "\n\n\t\t\t\t Room Number : " << cust[number].get_room_id();
			cout << "\n\n\t\t\t\t Name of Customer : " << cust[number].get_name();
			cout << "\n\n\t\t\t\t Customer Id Card : " << cust[number].get_id_card();
			cout << "\n\n\t\t\t\t Customer Nationality : " << cust[number].get_nationality();
			cout << "\n\n\t\t\t\t*****************************************************************************";
			cout << "\n\n\t\t\t\t*****************************************************************************";

			cout << "\n\n\t\t\t\t\t\t The New Data :";
			cout << "\n\n\t\t\t\tEnter The Customer Name  : ";
			cin >> name;
			cust[number].set_name(name);
			cout << "\n\n\t\t\t\tEnter The Customer Nationality  : ";
			cust[number].set_nationality();
			cust[number].set_id_card();//loop to take the values from user  if(value > 0 )
			cout << "\n\n\t\t\t\t*****************************************************************************";
		}break;
		case'x': {
			cust[number] = cust[hote.get_number_cust() - 1];
			cust[hote.get_number_cust() - 1] = cust[number];
			cust[hote.get_number_cust() - 1].set_room_id(number);
			cout << "\n\n\t\t\t\tData has been Deleted \n\n";
			hote.set_number_cust_del();
			hote.set_number_room_empty_del();
			cust[number].set_room_id(number + 1);
		}break;
		default:
			break;
		}
	}
	counter = 0;

}



void get_ResultProfit(hotel hote)
{

	cout << "\t\t**********************************************************************\n";
	cout << "\t\t**********************************************************************\n";
	cout << "\t\t***                                     **                         ***\n";
	cout << "\t\t***    Number Of Customer               **          " << hote.get_number_cust() << "\n";
	cout << "\t\t***                                     **                         ***\n";
	cout << "\t\t***                                     **                         ***\n";
	cout << "\t\t***    Number Of Employee               **          " << hote.get_number_emp() << "\n";
	cout << "\t\t***    Sumiton of Salary               **           "<<hote.get_number_emp()*5000<<"\n";
	cout << "\t\t***                                     **                         ***\n";
	cout << "\t\t***                                     **                         ***\n";
	cout << "\t\t***    Number Of Rooms Empty            **          " << hote.get_number_room_empty()<< "\n";
	cout << "\t\t***                                     **                         ***\n";
	cout << "\t\t***                                     **                         ***\n";
	cout << "\t\t***    Total Profit                     **          " << hote.get_number_cust()*5000 << "\n";
	cout << "\t\t***                                     **                         ***\n";
	cout << "\t\t***                                     **                         ***\n";
	cout << "\t\t***    The Rent                         **           "<<20000<<"      \n";
	cout << "\t\t***                                     **                         ***\n";
	cout << "\t\t***     Toltal Profit after             **                         ***\n";
	cout << "\t\t***     The opponent Of the             **        " << ((hote.get_number_cust() - hote.get_number_emp()) * 5000) - 20000 << "\n";
	cout << "\t\t***            Optics                   **                         ***\n";
	cout << "\t\t***                                     **                         ***\n";
	cout << "\t\t**********************************************************************\n";
	cout << "\t\t**********************************************************************\n";
	system("pause");
}

void about() {

	cout << "\t\t\t****************************************************************************\n";
	cout << "\t\t\t*                             MADE BY:                                     *\n";
	cout << "\t\t\t****************************************************************************\n";
	cout << "\t\t\t****************************************************************************\n";
	cout << "\t\t\t***                      Eng.Musab Al Gobery                             ***\n";
	cout << "\t\t\t***                                                                      ***\n";
	cout << "\t\t\t***                  Phone_Number:+967 771166946                         ***\n";
	cout << "\t\t\t***                                                                      ***\n";
	cout << "\t\t\t****************************************************************************\n";
	cout << "\t\t\t***                      Eng.Osama Al Najm                               ***\n";
	cout << "\t\t\t***                                                                      ***\n";
	cout << "\t\t\t***                  Phone_Number:+967 777462233                         ***\n";
	cout << "\t\t\t***                                                                      ***\n";
	cout << "\t\t\t****************************************************************************\n";
	cout << "\t\t\t***                       Eng.Anas Abo Ali                               ***\n";
	cout << "\t\t\t***                                                                      ***\n";
	cout << "\t\t\t***                   Phone_Number:+967 775935743                        ***\n";
	cout << "\t\t\t***                                                                      ***\n";
	cout << "\t\t\t****************************************************************************\n";
	cout << "\t\t\t****************************************************************************\n";

}