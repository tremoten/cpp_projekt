//------------------------------------------------------------------------------
// person_h.h 
// Funktionsprototyper till personer
// Anna-Malin Joshammar
//------------------------------------------------------------------------------
#ifndef person_h
#define person_h 
#include <iostream>   
#include <vector>	
#include <string>  
#include "constants.h"
using namespace std;

void addPerson(vector<Person> p);
bool yesOrNo(string str); 
void printList(vector<Person> p);

#endif