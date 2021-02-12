#ifndef FRACTION_H_
#define FRACTION_H_
#include <iostream>
#include <cstring>
#include <cstdlib>
#include <string>
#include <stdlib.h>
using namespace std;
class Fraction
{

private:                        // internal implementation is hidden
    int num;                    // numerator
    int den;                    // denominator

    int gcd(int a, int b);        // calculates the gcd of a and b
    int lcm(int a, int b);

public:
    Fraction();                    // empty constructor
    Fraction(int, int = 1);     // constructor taking values for fractions and
    friend ostream &operator<<(ostream &,const Fraction &);//overloading << operator
    friend istream &operator>>(istream &,Fraction &);//overloading >> operator
    Fraction operator*(const Fraction &);//overloading * operator
    Fraction operator/(const Fraction &);//overloading / operator
    Fraction& operator=(const Fraction &);//overloading = operator
    Fraction operator+(const Fraction &);//overloading + operator
    Fraction operator-(const Fraction &);//overloading - operator
    bool operator<(const Fraction &);//overloading < operator
    bool operator>(const Fraction &);//overloading > operator


};



#endif /* FRACTION_H_ */
