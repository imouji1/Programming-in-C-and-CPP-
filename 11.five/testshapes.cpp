/*
    CH-230-A
    a11p6.c
    Idris Mouji
    i.mouji@jacobs-university.de
*/
#include "Shapes.h"
#include <cstdlib>
#include <iostream>

int main(int argc, char** argv) {

  Circle c("first circle", 3, 4, 7);
  RegularPolygon r("TRIANGLE", 1, 1, 3);
  Rectangle re("Rectangle", 1, 4, 4, 4, 5);
  Square s("Square",3, 4, 5, 6, 7, 4);

  r.printName();
  c.printName();
  cout <<"Area is     ";
  c.area();
  cout << "Perimeter is     ";
  c.perimeter();
  re.printName();
  cout <<"Area is     ";
  re.area();
  cout << "Perimeter is     ";
  re.perimeter();

  s.printName();
  cout <<"Area is     ";
  s.area();
  cout << "Perimeter is     ";
  s.perimeter();

return 0;
}
