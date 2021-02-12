#include <iostream>
#include "TournamentMember.h"
using namespace std;

int main()
{
    TournamentMember::setLocation("Germany");

    char fn[]="Idris";
    char ln[]="Mouji";
    char db[]="1998-21-07" ;
    char rl[]= "Player";
    char nc[] = "Morocco";
    Player p1; // default player
    //second instance of player
    Player p2(fn,ln,db,rl,nc, 99,"forward", 0, "right");
    char fn1[]="John";
    char ln1[]="Smith";
    char db1[]="1929-21-02" ;
    char rl1[]= "Player";
    char nc1[] = "USA";
    //third instance of player
    Player p3(fn1,ln1,db1,rl1,nc1, 87, "goalkeeper", 0 , "left");
    //increase number of goals by 3
    p3.goal(3);
    //fourth instance of player (copy of third)
    Player p4(p3);
    TournamentMember::setLocation("Hamburg");//moving players to new Location
    p1.print();
    p2.print();
    p3.print();
    p4.print();
    return 0;
}
