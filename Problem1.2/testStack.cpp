#include "Stack.h"
#include <iostream>

using namespace std;

int main(int argc, char** argv)
{
    Stack<int> x;//empty constructor
    Stack<double> y(7);//parametrized constructor
    Stack<double> xy(y);//copy consrtuctor
    bool tf = true;
    bool ft = true;
    int n;
    double d;
    cout << "Number of entries ... " << x.getNumEntries() << endl;
    cout << "Number of entries ... " << y.getNumEntries() << endl;
    cout << "Number of entries ... " << xy.getNumEntries() << endl;

    //filling/pushing elements into example stacks that were created using push
    while(tf != false)
    {
    tf = x.push(n);
    ++n;
    }

    while(ft != false)
    {
    ft = y.push(d);
    ++d;
    }
    cout << "Number of entries ... " << x.getNumEntries() << endl;
    cout << "Number of entries ... " << y.getNumEntries() << endl;
    cout << "Number of entries ... " << xy.getNumEntries() << endl;


    //emptying top of stack 

    tf = x.pop(n);
    ft = y.pop(d);
    tf = xy.pop(d);
    ft = true;
    tf = true;
    cout << "Number of entries ... " << x.getNumEntries() << endl;
    cout << "Number of entries ... " << y.getNumEntries() << endl;
    cout << "Number of entries ... " << xy.getNumEntries() << endl;


    //emptying whole stack 

    while(ft != false)
    {
    ft = x.pop(n);
    --n;
    }

    while(tf != false)
    {
    tf = y.pop(d);
    --d;
    }
    cout << "Number of entries ... " << x.getNumEntries() << endl;
    cout << "Number of entries ... " << y.getNumEntries() << endl;
    cout << "Number of entries ... " << xy.getNumEntries() << endl;
}

