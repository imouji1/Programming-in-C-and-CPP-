#include <iostream>
#include <cstdlib>
#include "Creature.h"

using namespace std;

Creature::Creature(): distance(10)
{cout << "Creature constructor called"<< endl;}

void Creature::run() const
{
    cout << "running " << distance << " meters!\n";
}

Creature::~Creature(){
	cout << "Creature destructor being called" << endl;

}


Wizard::Wizard() : distFactor(3)
{cout << "Wizard constructor" << endl;}

Wizard::~Wizard(){
	cout << "Wizard being called."<< endl;
}

void Wizard::hover() const
{
    cout << "hovering " << (distFactor * distance) << " meters!\n";
}

//adding two classes derived from creature
//some example properties and methods
//implement at least one property and one method for each derived class


Hobbit::Hobbit(): weight(40), distFactor(2){
	cout << "Hobbit constructor being called" << endl;
}
void Hobbit::skip() const{
	cout << "skipping " << (distFactor*distance) <<" metres!\n";
}
Hobbit::~Hobbit(){
	cout << "Hobbit destructor being called" << endl;
}


Fly::Fly(): weight(4), distFactor(4){
	cout << "Fly constructor being called" << endl;
}
void Fly::fly() const {
	cout << "flying " << (distFactor*distance) <<" metres!\n";
}
Fly::~Fly(){
	cout << "Fly destructor being called" << endl;
}
