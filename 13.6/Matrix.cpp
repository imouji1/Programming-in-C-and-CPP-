/*

    CH-230-Aa13p6.c
    Idris Mouji
    imouji@jacobs-university.de

*/
#include <iostream>
#include <math.h>
#include "Matrix.h"
#include "Vector.h"
using namespace std;
//default constructor, we will assign needed for further calculations(test) values
Matrix::Matrix()
{
R=3;
C=3;
mat=new double*[R];
for (int i = 0; i< R; i++){
    mat[i] = new double[C];
}

}
//reg constructor
Matrix::Matrix(int nr,int nc,double **nmat)
{
R = nr;
C = nc;
mat = new double*[R];//memory allocation
for(int i = 0; i < R; i++) mat[i] = new double[i];
for(int i = 0; i < R;i++){
    for (int j=0;j<C;j++){
        mat[i][j]=nmat[i][j];
    }
}

}
//copy constructor
Matrix::Matrix(const Matrix& nm)
{
R = nm.R;
C = nm.C;
mat = new double*[R];//memory allocation
for(int i = 0; i < R; i++) mat[i] = new double[i];
for(int i = 0; i < R;i++){
    for (int j=0;j<C;j++){
        mat[i][j]=nm.mat[i][j];
    }
}

}
//destructor
Matrix::~Matrix()
{
for (int i =0 ; i< R; i++){
   delete mat[i];
}
delete[] mat;
}
//setters
void Matrix::setMR(int nvs)
{
R=nvs;
}
void Matrix::setMC(int nvs)
{
C=nvs;
}
void Matrix::setMat(double **d_mat)
{
for(int i = 0; i < R;i++){
    for (int j=0;j<C;j++){
        mat[i][j]=d_mat[i][j];
    }
}
}
//getters
int Matrix::getMR()
{
return R;
}
int Matrix::getMC()
{
return C;
}
double Matrix::getMat(int i,int j)
{
if(i >= this->R || j >= this->C || i < 0 || j < 0 || this->mat == NULL){
    return 0;
}
return this->mat[i][j];
}

ostream&operator<<(ostream &out, const Matrix &c)
{//outputing matrix
for (int i = 0;i<c.R;i++){
    for (int j =0 ;j < c.C; j++){
        out<<c.mat[i][j]<<" ";
    }
    out<<'\n';
}
return out;
}
//input
istream&operator>>(istream &in, Matrix &m)
{
int r = 0,c=0;
in >> r>>c;//reading dimensions
m.setMR(r);
m.setMC(c);
//reading the input, and setting the matrix
for (int i =0 ;i< r;i++){
    for (int j = 0; j< c; j++){
        in>>m.mat[i][j];
    }
}
return in;


}

Vector Matrix::operator*(Vector &v){
if (this->C !=v.getVsize()){
    cout<<"Wrong dimension!";
    return Vector();
}
else {
    //create new matrix
    double* res = new double[this->R];
    if (res== NULL){
        exit(1);
    }
    //calculate
    for (int i =0; i< this->R;i++) {
        res[i] = 0;
        for (int j = 0; j < this->C; j++) {
            res[i] += this->mat[i][j]*v.getVec_i(j);
        }
    }
    return Vector(this->R,res);
}
}
