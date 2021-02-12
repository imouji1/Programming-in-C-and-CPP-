/*
CH-230-A
a10 p4.cpp
Idris Mouji
i.mouji@jacobs-university.de
*/
#include <string>
#include <iostream>
#include <cstdlib>
#include "Critter.h"

using namespace std;

int main(int argc, char** argv)
{
    //Creating instances with the 3 different constructors
    Critter c;
    Critter d("Idris");
    Critter f("Lin", 5, 5);
    Critter e("Michael", 5, 5, 180);

    //setting hunger levels to 2
    c.setHunger(2);
    d.setHunger(2);
    e.setHunger(2);
    f.setHunger(2);

    //printing the properties
    c.print();
    d.print();
    f.print();
    e.print();

        return 0;
}
