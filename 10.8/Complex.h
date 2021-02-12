/*
CH-230-A
a10p8.cpp
Idris Mouji
imouji@jacobs-university.de
*/

#ifndef COMPLEX_H_INCLUDED
#define COMPLEX_H_INCLUDED

#include <cstdlib>
#include <iostream>

//real part and imaginary part
//default constructor initializing the properties by 0,
//another constructor for initializing with values
//copy constructor and destructor
//suitable setter and getter methods for each property

using namespace std;

class Complex
{
  private:
  int r;//real
  int i;//imaginary

  public:


  Complex();
  Complex(int, int);
  Complex(const Complex&);
  ~Complex();
  //setters
  void setReal(int);
  void setImaginary(int);
  //getters
  int getReal();
  int getImaginary();
  //service
  void print();
  Complex conjugate(Complex);
  Complex add(Complex);
  Complex subtract(Complex);
  Complex multiply(Complex);

};



#endif //COMPLEX_H_INCLUDED
