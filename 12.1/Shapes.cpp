// please refer to shapes.h for methods documentation

#include <iostream>
#include <math.h>
#include "Shapes.h"

using namespace std;

Shape::Shape(const string& n) : name(n) {
}


void Shape::printName() const {
	cout << name << endl;
}

CenteredShape::CenteredShape(const string& n, double nx, double ny): Shape(n) {
	x = nx;
	y = ny;
}

RegularPolygon::RegularPolygon(const string& n, double nx, double ny, int nl) :
	CenteredShape(n,nx,ny)
{
	EdgesNumber = nl;
}




Circle::Circle(const string& n, double nx, double ny, double r) :
  CenteredShape(n,nx,ny)
{
	Radius = r;
}



Hexagon::Hexagon(const string& n, double nx, double ny, int ns,
const string& c):RegularPolygon(n,ny,nx,6)
{

 side = ns;
 color = c;
}
double Hexagon::area(){
	double ar;
	int t = getSide();
	 ar = ((3*(sqrt(3)))/2) *	(t*t);
	 return ar;
}
double Hexagon::perimeter()
{
	int t = getSide();
	return t * 6;
}
void Hexagon::setSide(int s)
{
	side = s;
}

void Hexagon::setColor(string& c)
{
	color = c;
}

int Hexagon::getSide()
{
	return side;
}

string Hexagon::getColor()
{
	return color;
}

string Shape::getName()
{
	return name;
}
//Copy

Shape::Shape(const Shape& s)
{
	name = s.name;
}
CenteredShape::CenteredShape(const CenteredShape& s):	Shape(s)
{
	x = s.x;
	y = s.y;
}

RegularPolygon::RegularPolygon(const RegularPolygon& s): CenteredShape(s)
{
	EdgesNumber = s.EdgesNumber;
}
Circle::Circle(const Circle& s):CenteredShape(s)
{
	Radius = s.Radius;
}

Hexagon::Hexagon(const Hexagon& s):RegularPolygon(s)
{
	side = s.side;
	color = s.color;
}
