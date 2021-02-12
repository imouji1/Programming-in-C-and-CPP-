
    /*

        CH-230-Aa13p6.c
        Idris Mouji
        imouji@jacobs-university.de

    */
#ifndef _VECTOR_H
#define _VECTOR_H
#include <bits/stdc++.h>
#include "Matrix.h"
using namespace std;
class Vector {
private://parameters
    int Vsize;//size of vector
    double *vec_p;//double pointer
public:
    Vector();//def constructor
    Vector(int,double*);//reg constructor
    Vector(const Vector&);//copy
    ~Vector();//destructor
    //setters
    void setVsize(int);
    void setVec_p(double*);
    //getters
    int getVsize();
    double* getVec_p();
    double getVec_i(int);
    //methods
    void print() const;
    double norm();
    Vector add(const Vector) const;
    Vector subtr(const Vector) const;
    double sprod(const Vector);
    friend ostream &operator<<(ostream &, const Vector &);
    friend istream &operator>>(istream &, Vector &);
    Vector operator*(Matrix& mat);
};
#endif
