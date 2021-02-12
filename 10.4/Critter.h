/*
CH-230-A
a10 p4.cpp
Idris Mouji
i.mouji@jacobs-university.de
*/
#ifndef CRITTER_H_INCLUDED
#define CRITTER_H_INCLUDED

#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;
 // defines standard C++ string class

/* First C++ class */
class Critter
{
private:  // data members are private
	std::string name;
	int hunger;
	int boredom;
	double height;
	//new properties
	int age;
	std::string gender;

public: // business logic methods are public
	// setter methods
	void setName(std::string& newname);
	void setHunger(int newhunger);
	void setBoredom(int newboredom);

	//setters for new properties
	void setGender(std::string& newgender);
	void setAge(int newage);
	// getter method
	int getHunger();

	// service method
	void print();

//Default Constructor
  Critter(){
  name = "defualt_critter";
  height = 5;
  hunger = 0;
  boredom = 0;
  age = 0;
  gender ="default";
  cout<< endl << "1st Default Constructor"<< endl;

  };
//Constructor with one parameter specified
  Critter(std::string name1): name(name1){
  	height = 5;
  	hunger = 0;
  	boredom = 0;
  	age = 0;
  	gender = "male";
  	cout << endl << "2nd Constructor when supplying only name" << endl;
  };
//constructor with three or all 4 parameter specidied
  Critter(std::string n, double h, int b, double he=10)
  	      :name(n), hunger(h), boredom(b), height(he)
  	      {
  	    cout << endl
        << "3rd Constructor --this is with all or 3 parameterconstructor"
        << endl;
  	      age = 100;
  	    };

};
#endif // CRITTER_H_INCLUDED
