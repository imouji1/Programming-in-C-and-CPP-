/*

     CH-230-Aa13p6.c
     Idris Mouji
     imouji@jacobs-university.de

 */

#ifndef _MATRIX_H
#define _MATRIX_H
#include <bits/stdc++.h>

using namespace std;
class Vector;//avoiding cross-reference due to size-dependence
class Matrix {
private://parameters
 int R,C;//size of vector
 double **mat;//double pointer
public:
 Matrix();//def constructor
 Matrix(int,int, double**);//reg constructor
 Matrix(const Matrix&);//copy
 ~Matrix();//destructor
 //setters
 void setMR(int);
 void setMC(int);
 void setMat(double**);
 //getters
 int getMR();
 int getMC();
 double getMat(int,int);
 //methods
 void print() const;
 friend ostream &operator<<(ostream &, const Matrix &);
 friend istream &operator>>(istream &, Matrix &);
 Vector operator*(Vector &v);

};
#endif
