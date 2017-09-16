//------------------------------------------------------------------------------
// person.cpp
// Funktionsdefinitioner till menyn
// Anna-Malin Joshammar
//------------------------------------------------------------------------------
#include <vector>			 // std::vector 
#include <iomanip>			 // setw, left, right 

#include "person_h.h"
#include "constants.h" 
//------------------------------------------------------------------------------ 
//  addPerson
//------------------------------------------------------------------------------ 
// Uppgift: Lägga till en person
// Indata : -
// Utdata : - 
//------------------------------------------------------------------------------
void addPerson(vector<Person> p)
{
	Person tmpPerson;

	vector<Person>persons;									//vector för att lagra en lista med personer
	do
	{
		// Mata in data för personen   
		cout << "Firstname: ";
		cin.ignore();
		getline(cin, tmpPerson.firstName);

		cout << "Lastname : ";
		getline(cin, tmpPerson.lastName);

		cout << "Length   : ";
		cin >> tmpPerson.legth;

		cin.get(); 

		persons.push_back(tmpPerson);						//Lägg in personen i listan persons
		
		
	} while (yesOrNo("Vill du lägga till en till person? (j/n): "));

}

//------------------------------------------------------------------------------ 
// Funktionsdefinition
//------------------------------------------------------------------------------ 
// YesOrNo 
//------------------------------------------------------------------------------ 
// Uppgift: Skriver ut en fråga och väntar sedan att användaren ska trycka på 
//          j(J) eller N(n), som svar på frågan.
// Indata : str (string) - en sträng med frågan 
// Utdata : true (bool) - om användaren svarar j(J)
//          false (bool) - om användaren svarar n(N)
//------------------------------------------------------------------------------
bool yesOrNo(string str) 
{   
	cout << str;  
char ch;   
do  
{   
	cin >> ch;  
	cin.get();  
	ch=toupper(ch); 
}while(!(ch=='J'||ch=='N'));   
return (ch=='Y'); 
}; 

//------------------------------------------------------------------------------ 
//  printList
//------------------------------------------------------------------------------ 
// Uppgift: Skriver ut listan med personer
// Indata : -
// Utdata : - 
//------------------------------------------------------------------------------
void printList(vector<Person> p)
{
	for (auto e : p)
	{
		cout << left << setw(20) << e.firstName;
		cout << setw(20) << e.lastName;
		cout << right << setw(5) << e.legth << endl;
	}
	cout << endl;

}