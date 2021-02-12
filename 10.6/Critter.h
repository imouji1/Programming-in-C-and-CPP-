/*
CH-230-A
a10 p6.cpp
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
	string name;
	double hunger;
	int boredom;
	double height;
	//new properties
	int age;
	std::string gender;

  //new property for problem 10.6
  double thirst;

public: // business logic methods are public
	// setter methods
	void setName(std::string& newname);
	void setHunger(int newhunger);
	void setBoredom(int newboredom);

	//setters for new properties
	void setGender(std::string& newgender);
	void setAge(int newage);
  void setThirst(double newthirst);
	// getter method
	int getHunger();

	// service method
	void print();

//Default Constructor
  Critter(){
  cout<< endl << "1st Default Constructor"<< endl;
  name = "defualt_critter";
  height = 5;
  hunger = 0;
  boredom = 0;
  age = 0;
  gender ="default";

  ///////////////setting thirst same as height value//////////
  thirst = height;
  };

//Constructor with one parameter specified
  Critter(std::string name1): name(name1){
    cout << endl << "2nd Constructor when supplying only name" << endl;
  	height = 5;
  	hunger = 0;
  	boredom = 0;
  	age = 0;
  	gender = "male";

    /////////// setting thirst same as height value///////
    thirst = height;
  };
//constructor with three or all 4 parameter specidied
  Critter(std::string n, double h, int b, double he=10)
  	      :name(n), hunger(h), boredom(b), height(he)
  {
  	    cout << endl<<
        "3rd Constructor --this is with all or 3 parameterconstructor"
        << endl;

  	    age = 100;

        ///////////setting thirst same as height value/////////
        thirst = height;
  };

  Critter(std::string n, double h, int b, double he, double th)
        :name(n), hunger(h), boredom(b), height(he), thirst(th)
        {
          ///////setting thirst to parameter provided
        thirst = th;
        cout << endl
        << "4th Constructor with five parameter being called"
        << endl;
        age = 100;
      };


};
#endif // CRITTER_H_INCLUDED
