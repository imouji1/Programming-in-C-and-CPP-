/*
CH-230-A
a11p2.cpp
Idris Mouji
imouji@jacobs-university.de
*/

#include <iostream>

using namespace std;

class Creature {
	public:
		Creature();
		void run() const;
		~Creature();

	protected:
		int distance;
};

Creature::Creature(): distance(10)
{cout << "Creature constructor called"<< endl;}

void Creature::run() const
{
    cout << "running " << distance << " meters!\n";
}

Creature::~Creature(){
	cout << "Creature destructor being called" << endl;
}

class Wizard : public Creature {
	public:
		Wizard();
		void hover() const;
		~Wizard();

	private:
		int distFactor;
};

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

class Hobbit : public Creature{
	private:
		int weight;
		int distFactor;
	public:
		Hobbit();
		~Hobbit();
		void skip() const;

};
Hobbit::Hobbit(): weight(40), distFactor(2){
	cout << "Hobbit constructor being called" << endl;
}
void Hobbit::skip() const{
	cout << "skipping " << (distFactor*distance) <<" metres!\n";
}
Hobbit::~Hobbit(){
	cout << "Hobbit destructor being called" << endl;
}

class Fly : public Creature{
private:
		int weight;
		int distFactor;
	public:
		Fly();
		~Fly();
		void fly() const;

};
Fly::Fly(): weight(4), distFactor(4){
	cout << "Fly constructor being called" << endl;
}
void Fly::fly() const {
	cout << "flying " << (distFactor*distance) <<" metres!\n";
}
Fly::~Fly(){
	cout << "Fly destructor being called" << endl;
}

int main()
{
    cout << "Creating an Creature.\n";
    Creature c;
    c.run();

    cout << "\nCreating a Wizard.\n";
    Wizard w;
    w.run();
    w.hover();

		cout << "\nCreating a Hobbit.\n";
    Hobbit h;
    h.run();
    h.skip();

		cout << "\nCreating a Fly.\n";
    Fly f;
    f.run();
    f.fly();

    return 0;
}
