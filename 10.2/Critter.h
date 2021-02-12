#include <string> // defines standard C++ string class

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
};
