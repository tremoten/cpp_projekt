//-------------------------------------------------------------------
// main.cpp
// Projekt
// Anna-Malin Joshammar
//-------------------------------------------------------------------
#include <iostream>     // cout endl
#include <string>      // string-klassen

#include "meny_h.h"
#include "person_h.h"

using namespace std;    //cout cin
//------------------------------------------------------------------------------
// main() börjar
//------------------------------------------------------------------------------
int main()
{
	setlocale(LC_ALL, ""); //ÅÄÖ

	int userMenuChoice;														 // Användarens menyval
	bool again = true; 
	vector<Person> personList;

	do   
	{
		showMenu();                     
		userMenuChoice = menuChoice();

		switch (userMenuChoice)
		{                               
		case 1:
			// Lägg till person
			cout << "Test 1" << endl; 
			addPerson(personList);
			break;
		case 2:
			// Skriv ut listan till skärm
			cout << "Test 2" << endl;
			break;
		case 3:
			// Sök person
			int test;
			cout << "Test 3" << endl;
			cin >> test;
			break;
		case 4:
			// Radera person
			
			break;
		case 5:
			// Sortera 

			break;
		case 6:
			// 

			break;
		case 7:
			// 

			break;
		case 8:
			// 

			break;
		case 9:
			// 

			break;
		case 10:
			// 

			break;
		case 11:
			// Avsluta program
			cout << "Avslutar program..." << endl;
			return 0;
		}
	} while (again);

	return 0;
}
