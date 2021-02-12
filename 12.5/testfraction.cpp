#include <iostream>
#include "fraction.h"
#include <typeinfo>
using namespace std;

int main(void)
{

    Fraction a;
    Fraction b;
    cout<<"Enter the first fraction:"<<endl;
    cin>>a;//input of two fractions
    cout<<"Enter the second fraction:"<<endl;
    cin>>b;
    if(a>b)
    {
        cout<<a<<" is bigger"<<endl;
    }
    else
    {
        cout<<b<<" is bigger"<<endl;
    }
    Fraction sum;//object for storing the results
    Fraction diff;
    sum=(a+b);
    diff=(a-b);
    cout<<a<<"+"<<b<<"="<<sum<<endl;
    cout<<a<<"-"<<b<<"="<<diff<<endl;

}
