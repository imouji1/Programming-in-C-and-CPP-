/*
CH-230-A
a10 p6.cpp
Idris Mouji
i.mouji@jacobs-university.de
*/

#include <iostream>
#include <cstdlib>
#include <string>
#include "Critter.h"

using namespace std;



void Critter::setName(string& newname) {
	name = newname;
}

void Critter::setHunger(int newhunger) {
	hunger = 0.1*(double)newhunger;
}
//new setters
void Critter::setGender(string& newgender){
	gender = newgender;
}

void Critter::setAge(int newage){
	age = newage;
}

void Critter::print() {
	cout << endl << "My name is " << name << " and I am "<< boredom
	<<" bored. My hunger level is "
	<< getHunger() << " and my thirst level is " <<
  thirst << ". My height is "<< height << " units." << endl;
}

int Critter::getHunger() {
	return 10*hunger;
}