/*
    CH-230-A
    a11p5.c
    Idris Mouji
    i.mouji@jacobs-university.de
*/


#ifndef SHAPES_H_INCLUDED
#define SHAPES_H_INCLUDED

#include <string>
#include <cstdlib>
#include <math.h>

using namespace std;

class Shape {            // base class
    private:                   // private access modifier: could also be protected
        std::string name;   // every shape will have a name
    public:
        Shape(const std::string&);  // builds a shape with a name
        Shape();                    // empty shape
        Shape(const Shape&);        // copy constructor
        void printName() const ;      // prints the
        void setShapename(std::string&);
        string getShapename();


};

class CenteredShape : public Shape {  // inherits from Shape
    private:
        double x,y;  // the center of the shape
    public:
        CenteredShape(const std::string&, double, double);  // usual three constructors
        CenteredShape();
        CenteredShape(const CenteredShape&);
        void move(double, double);    // moves the shape, i.e. it modifies it center
        void setx(double);
        void sety(double);
        double getx();
        double gety();
};

class RegularPolygon : public CenteredShape { // a regular polygon is a centered_shape with a number of edges
    private:
        double EdgesNumber;
    public:

        RegularPolygon(const std::string&, double, double, double);
        RegularPolygon();
        RegularPolygon(double);
        RegularPolygon(const RegularPolygon&);
        void setRegularPolygonEdgesNumber(double);
        double getRegularPolygonEdgesNumber();
};

class Circle : public CenteredShape {  // a Circle is a shape with a center and a radius
    private:
        double Radius;
    public:
        void perimeter()const;
        void area()const;
        Circle(const std::string&, double, double, double);
        Circle();
        Circle(const Circle&);
        void setCircleRadius(double);
        double getCircleRadius();

};

class Rectangle : public RegularPolygon{
    private:
        double width;
        double height;
    public:

        void perimeter() const;
        void area()const;
        Rectangle(const    std::string& , double, double, double,double, double);
        Rectangle();
        Rectangle(const Rectangle&);
        void setRectanglewidth(double);
        void setRectangleheight(double);
        double getRectanglewidth();
        double getRectangleheight();

};

class Square : public Rectangle{
    private:
        double sides;
    public:
        void perimeter()const;
        void area()const;
        Square(const std::string&, double, double, double, double, double, double);
        Square();
        Square(const Square&);
        void setSquaresides(double);
        double getSquaresides();
    };
#endif //
