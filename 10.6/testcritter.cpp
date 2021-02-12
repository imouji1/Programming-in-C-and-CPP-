/*
CH-230-A
a10 p6.cpp
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
    Critter c;
    Critter d("Idris");
    Critter f("Lin", 5, 5);
    Critter e("Michael", 5, 5, 180);
    //new constructor being called
    Critter g("Thirsty", 6, 6, 360, 6);



    c.setHunger(2);
    d.setHunger(2);
    e.setHunger(2);
    f.setHunger(2);

    c.print();
    d.print();
    f.print();
    e.print();

        return 0;
}
