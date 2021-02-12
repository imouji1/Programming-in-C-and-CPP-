/*
CH-230-A
a10p8.cpp
Idris Mouji
imouji@jacobs-university.de
*/
#include <cstdlib>
#include <iostream>
#include "Complex.h"

using namespace std;

//constructors

Complex::Complex()
{
  r=0;
  i=0;
//  cout << "1st construct" << endl;
}

Complex::Complex(int re, int im): r(re), i(im)
{
//  cout << "2nd construct" << endl;
}

Complex::Complex(const Complex& a): r(a.r), i(a.i)
{
//  cout << "Copy construct" << endl;

}
Complex::~Complex(){
//  cout << "Destructor" << endl;
}

void Complex::setReal(int newr){
    r= newr;
};
void Complex::setImaginary(int newi){
  i = newi;
};
//getters
int Complex::getReal(){
  return r;
};
int Complex::getImaginary(){
  return i;
};
//service
void Complex::print(){
  if(getImaginary() < 0){
    cout << getReal() << getImaginary() << "i" << endl;}
  else {
    cout << getReal() << "+" << getImaginary() << "i" << endl;}
};
Complex Complex::conjugate(Complex cx){
  // cout << "Doing conjugate" << endl;
   Complex ci;
     ci.setReal(cx.r);//= r + cx.r;
     ci.setImaginary(-1*cx.i);//=r + cx.r;
     return ci;
 };


Complex Complex::add(Complex cx){
  //cout << "Doing addition" << endl;
  Complex ci;
  ci.setReal(r+cx.r);//= r + cx.r;
  ci.setImaginary(i + cx.i);//=r + cx.r;

  return ci;
};
Complex Complex::subtract(Complex cx){
  //cout << "Doing subtraction" << endl ;
  Complex ci;
  ci.setReal(r-cx.r);//= r + cx.r;
  ci.setImaginary(i-cx.i);//=r + cx.r;
  return ci;
};
Complex Complex::multiply(Complex cx){
  Complex ci;
  ci.setReal(r*cx.r - i*cx.i);
  ci.setImaginary(i*cx.r + r*cx.i);
  return ci;
}
