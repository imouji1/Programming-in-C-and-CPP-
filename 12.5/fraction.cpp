#include <iostream>
#include "fraction.h"
using namespace std;
Fraction::Fraction()
{
    num = 1;
    den = 1;
}

Fraction::Fraction(int n, int d)//constructor
{
    int tmp_gcd = gcd(n, d);

    num = n / tmp_gcd;
    den = d / tmp_gcd;
}

int Fraction::gcd(int a, int b)
{

    int tmp_gcd = 1;//default value
    //checking whether a and b are negative
    //(if yes, then for the sake of code change it to positive)
    if(a<0)
    {
        a*=-1;
    }
    if(b<0)
    {
        b*=-1;
    }
    if (a==0||b==0)//checking whether some of them is 0
    {
        return 1;
    }
    for (int i=1; i<=min(a,b); i++)
    {
        if (a%i==0&&b%i==0)
        {
            tmp_gcd=i;
        }
    }

    return tmp_gcd;
}

int Fraction::lcm(int a, int b)
{

    return a * b / gcd(a, b);

}
//overloading * operator
Fraction Fraction::operator*(const Fraction &f)
{
    if (f.den==0||den==0)
    {
        cout<<"denominator is zero, wrong operation"<<endl;
        Fraction res1(0,0);
        return res1;
    }
    Fraction res(this->num*f.num, this->den*f.den);
    return res;
}
//overloading / operator
Fraction Fraction::operator/(const Fraction &f)
{
    if (f.den==0||den==0)//checking whether we have 0 in den
    {
        cout<<"denominator is zero, wrong operation"<<endl;
        Fraction res1(0,0);
        return res1;
    }
    Fraction res(this->num*f.den, this->den*f.num);
    return res;
}
//overloading = operator
Fraction& Fraction::operator=(const Fraction &f)
{
    num=f.num;
    den=f.den;
    return *this;
}
//overloading + operator
Fraction Fraction::operator+(const Fraction &f)
{
    if (f.den==0||den==0)//if zero is denominator
    {
        cout<<"denominator is zero, wrong operation"<<endl;
        Fraction res1(0,0);
        return res1;
    }
    Fraction res((num*lcm(den,f.den)/den)+(f.num*lcm(den,f.den)/f.den),
    lcm(den,f.den));
    return res;
}
//overloading < operator
bool Fraction::operator<(const Fraction &f)
{
    //we need them to have a same denominator
    //therefore we will convert nominators only, and we will compare them
    int temp_a = (num*lcm(den,f.den)/den);
    int temp_b = (f.num*lcm(den,f.den)/f.den);
    if (temp_a<temp_b)
    {
        return true;
    }
    else
        return false;

}
//overloading > operator
bool Fraction::operator>(const Fraction &f)
{
    //we need them to have a same denominator
    //therefore we will convert nominators only, and we will compare them
    int temp_a = (num*lcm(den,f.den)/den);
    int temp_b = (f.num*lcm(den,f.den)/f.den);
    if (temp_a>temp_b)
    {
        return true;
    }
    else
        return false;

}
//overloading - operator
Fraction Fraction::operator-(const Fraction &f)
{
    if (f.den==0||den==0)
    {
        cout<<"denominator is zero, wrong operation"<<endl;
        Fraction res2(0,0);
        return res2;
    }
    if(((num*lcm(den,f.den)/den)-(f.num*lcm(den,f.den)/f.den))==0)//if the res denominator 0
    {

        Fraction res1(0,0);
        return res1;
    }

    Fraction res((num*lcm(den,f.den)/den)-(f.num*lcm(den,f.den)/f.den), lcm(den,f.den));
    return res;
}
ostream&operator<<(ostream &out,const Fraction &fr)
{
    out << fr.num<< '/' << fr.den;
    return out;

}
istream&operator>>(istream &in, Fraction &fr)
{
    in>>fr.num>>fr.den;
    if (fr.den == 0)
    {
      cout<<"Wrong input, denominator is equal to 0. Changed the value -1/-1 "<<endl;
      fr.den = -1;
      fr.num = -1;
      return in;
    }
    return in;
}
