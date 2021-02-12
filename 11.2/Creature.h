#ifndef _CREATURE_H_INCLUDED
#define _CREATURE_H_INCLUDED

#include <cstdlib>
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

class Wizard : public Creature {
	public:
		Wizard();
		void hover() const;
		~Wizard();

	private:
		int distFactor;
};

class Hobbit : public Creature {
	private:
		int weight;
		int distFactor;
	public:
		Hobbit();
		~Hobbit();
		void skip() const;

};
/*class Fly : public Creature {
  private:
//		int weight;
		int distFactor;
	public:
		Fly();
		~Fly();
		void fly() const;

};*/
#endif //_CREATURE_H_INCLUDED
