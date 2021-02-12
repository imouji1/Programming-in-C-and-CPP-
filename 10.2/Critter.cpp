#include <iostream>
#include "Critter.h"

using namespace std;

void Critter::setName(string& newname) {
	name = newname;
}

void Critter::setHunger(int newhunger) {
	hunger = newhunger;
}
//new setters
void Critter::setGender(string& newgender){
	gender = newgender;
}
void Critter::setAge(int newage){
	age = newage;
}

void Critter::print() {
	cout << "My name is " << name << " and I am "<< age <<". My hunger level is "
	<< hunger << ". I identify as a "<< gender << "." << endl;
}

int Critter::getHunger() {
	return hunger;
}
