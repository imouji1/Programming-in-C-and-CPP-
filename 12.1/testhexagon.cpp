#include <iostream>
#include <math.h>
#include "Shapes.h"

using namespace std;

int main()
{
  Hexagon h1("First hexagon", 5, 5, 9, "blue" );
  Hexagon h2("Second hexagon", 5, 5, 15, "green" );
  Hexagon h3( h2);
  h1.printName();
  cout << "\nPerimeter for h1: "<< h1.perimeter();
  cout << "\nArea for h1: "<< h1.area();

  cout << "\nPerimeter for h2: "<< h2.perimeter();
  cout << "\nArea for h2: "<< h2.area();

  cout << "\nPerimeter for h3: "<< h3.perimeter();
  cout << "\nArea for h3: "<< h3.area();
  return 0;
}
