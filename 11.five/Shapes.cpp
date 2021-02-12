/*
    CH-230-A
    a11p55.c
    Idris Mouji
    i.mouji@jacobs-university.de
*/


#include <cstdlib>
#include <iostream>
#include "Shapes.h"


using namespace std;



//constructors

Shape::Shape(){
}

Shape::Shape(const string& n) : name(n) {

//cout << "Shape constructor" << endl;
}


void Shape::printName() const {
    cout << name << endl;
}

CenteredShape::CenteredShape(const string& n, double nx, double ny): Shape(n) {
    x = nx;
    y = ny;
    //cout << "CenteredShape constructor" << endl;
}


RegularPolygon::RegularPolygon(const string& n, double nx, double ny, double ns) :
    CenteredShape(n,nx,ny)
{
    EdgesNumber = ns;
    //cout << "RegularPolygon constructor" << endl;
}

Circle::Circle(const std::string& n, double nx, double ny, double r) :
      CenteredShape(n,nx,ny)
{
    //cout << "Circle constructor" << endl;
    Radius = r;
}

Rectangle::Rectangle(const string& n, double nx, double ny, double ns, double nwidth, double nheight) :
       RegularPolygon(n, nx, ny,ns)
{

    //cout << "Rectangle constructor" << endl;
    width = nwidth;
    height = nheight;
}

Square::Square(const string& n, double nx, double ny, double nside, double ns, double nwidth, double nheight):
    Rectangle(n, nx, ny, ns, nwidth, nheight)
{
    sides= nside;
    //cout<<"Square constructor" << endl;
}

//setters and getters

void Shape::setShapename(string& newname){
    name = newname;
}


string Shape::getShapename(){
    return name;
}

void CenteredShape::setx(double newx){
    x=newx;
}

void CenteredShape::sety(double newy){
    y=newy;
}

void RegularPolygon::setRegularPolygonEdgesNumber(double newEdgesNumber){
    EdgesNumber=newEdgesNumber;
}

void Square::setSquaresides(double newSide){
    sides=newSide;
}

void Rectangle::setRectanglewidth(double newWidth){
    width=newWidth;
}

void Rectangle::setRectangleheight(double newHeight){
    height=newHeight;
}

void Circle::setCircleRadius(double newRadius){
    Radius=newRadius;
}

//getters//



double CenteredShape::getx(){
    return x;
}

double CenteredShape::gety(){
    return y;
}

double RegularPolygon :: getRegularPolygonEdgesNumber(){
   return EdgesNumber;
}

double Circle::getCircleRadius(){
    return Radius;
}


double Rectangle:: getRectanglewidth(){
    return width;
}

double Rectangle::getRectangleheight(){
    return height;
}

double Square::getSquaresides(){
   return sides;
}


void Circle::area() const{
    cout << Radius*Radius*M_PI<< endl;
}

void Circle::perimeter()const{
    cout <<2*Radius*M_PI<<endl;
}

void Rectangle::area()const {
    cout << height*width<<endl;
}

void Rectangle::perimeter()const {
    cout << 2*height+2*width << endl;
}

void Square::area()const {
    cout << sides*sides<< endl;
}

void Square::perimeter()const{
    cout << 4*sides<< endl;
}
