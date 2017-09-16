//------------------------------------------------------------------------------
// meny.cpp 
// Funktionsdefinitioner till menyn
// Anna-Malin Joshammar
//------------------------------------------------------------------------------
#include "meny_h.h "

#include <vector>     // std::vector 

//------------------------------------------------------------------------------ 
//  showMenu 
//------------------------------------------------------------------------------ 
// Uppgift: Skriver ut menyalternativ p� sk�rmen
// Indata : En vector (meny) med menyvalstexterna
// Utdata : - 
//------------------------------------------------------------------------------
void showMenu()
{
	vector <string> meny;
	meny.push_back("=========================");
	meny.push_back("        Huvudmeny");
	meny.push_back("1.  L�gg till person");
	meny.push_back("2.  Skriv lista med personer");
	meny.push_back("3.  S�k person");
	meny.push_back("4.  Ta bort person");
	meny.push_back("5.  Sortera listan efter namn");
	meny.push_back("6.  Sortera listan efter signatur");
	meny.push_back("7.  Sortera p� l�ngd");
	meny.push_back("8.  Slumpa ordningen");
	meny.push_back("9.  Skriv lista till fil");
	meny.push_back("10. L�s lista fr�n fil");
	meny.push_back("11. Avsluta");
	meny.push_back("=========================");

	for (auto e : meny)
		cout << e << endl; 

}

//------------------------------------------------------------------------------
// menuChoice
//------------------------------------------------------------------------------
// Uppgift: Hanterar menyval f�r en huvudmeny
// Indata :
// Utdata : menu_choice returneras som en integer
//------------------------------------------------------------------------------
int menuChoice()
{
	// Lagra menyvalet
	int menu_choice;

	// Fr�ga efter och l�s in menyvalet med teckenverifiering
	while ((cout << "Menyval: ") && (!(cin >> menu_choice) || menu_choice < 1 || menu_choice > 11))
	{
		//invalidChoice();
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
	}

	// Returnera menyvalet som en integer
	return menu_choice;
}
