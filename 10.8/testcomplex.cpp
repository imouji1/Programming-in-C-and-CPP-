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

int main(int argc, char** argv){

  //enter the real part and imaginary part seperately for 2 instances
  int a, b, c, d;

  cout << "Enter the real part of the complex number: ";
  cin >> a;
  cout << "Enter the imaginary part of the number: ";
  cin >> b;
  cout << "Enter the real part of the second complex number: ";
  cin >> c;
  cout << "Enter the imaginary part of the second complex number: ";
  cin >> d;

  Complex c1(a,b);
  Complex c2(c,d);
  Complex c3;
  Complex c4;
  Complex c5;


  cout << "First complex number: ";
  c1.print();
  cout << "Second complex number: ";
  c2.print();
 //Conjugate of first instance being determined and printed
 cout <<" Conjugate"<< endl;
  c4 = c4.conjugate(c1);
  c4.print();
//sum of first and second instances determined and printed
cout << "Addition" << endl;
  c3 = c1.add(c2);
  c3.print();
//difference of second and first instances determined and printed
cout << "Subtraction" << endl;
  c3 = c2.subtract(c1);
  c3.print();

//multiplication of the two instances determined and printed
cout << "Multiplication" << endl;
  c5 = c1.multiply(c2);
  c5.print();
//  c2.print();
  c3.print();

  return 0;

}
