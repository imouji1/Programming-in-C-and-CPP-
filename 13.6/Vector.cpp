/*

    CH-230-Aa13p6.c
    Idris Mouji
    imouji@jacobs-university.de

*/


#include <iostream>
#include <math.h>
#include "Vector.h"
using namespace std;
//default constructor, we will assign needed for further calculations(test) values
Vector::Vector()
{
    Vsize=9;
    vec_p=new double[9];
    for(int i = 0; i < Vsize; i++) vec_p[i] = i+4.2;
}
//reg constructor
Vector::Vector(int ns,double *d_arr)
{
    Vsize = ns;
    vec_p = new double[Vsize];//memory allocation
    for(int i = 0; i < Vsize; i++) vec_p[i] = d_arr[i];

}
//copy constructor
Vector::Vector(const Vector& nv)
{
    Vsize = nv.Vsize;
    vec_p = new double[Vsize];//memory allocation
    for(int i = 0; i < Vsize; i++) vec_p[i] = nv.vec_p[i];

}
//destructor
Vector::~Vector()
{
    delete vec_p;
}
//setters
void Vector::setVsize(int nvs)
{
    Vsize=nvs;
}
void Vector::setVec_p(double *d_arr)
{
    for(int i = 0; i < Vsize; i++) vec_p[i] = d_arr[i];
}
//getters
int Vector::getVsize()
{
    return Vsize;
}
double* Vector::getVec_p()
{
    return vec_p;
}
//print method
void Vector::print() const
{
    for(int i=0;i<Vsize;i++)
    {
        cout<<vec_p[i]<<" ";
    }
    cout<<endl;
}
//norm of vector
double Vector::norm()
{
    double sum=0;
    for (int i =0;i<Vsize;i++)
    {
        sum+=pow(vec_p[i],2);
    }
    return sqrt(sum);
}
//addition
Vector Vector::add(const Vector nv) const
{Vector nr(nv);
    for (int i =0 ; i<Vsize;i++)
    {
        nr.vec_p[i]=vec_p[i]+nv.vec_p[i];
    }
    return nr;
}
//subtraction
Vector Vector::subtr(const Vector nv) const
{Vector nr(nv);
    for (int i =0 ; i<Vsize;i++)
    {
        nr.vec_p[i]=vec_p[i]-nv.vec_p[i];
    }
    return nr;
}
//scalar product
double Vector::sprod(const Vector nv)
{double scpr_res;
    for (int i =0 ; i<Vsize;i++)
    {
        scpr_res+=vec_p[i]*nv.vec_p[i];
    }
    return scpr_res;
}
//overwriting output
ostream&operator<<(ostream &out, const Vector &c)
{
    for (int i = 0;i<c.Vsize;i++){
        out << c.vec_p[i]<<" ";

    }
    out<<"\n";
    return out;
}
//overwriting input
istream&operator>>(istream &in, Vector &c)
{
    int length = 0;
    in >> length;//collect length of the Vector
    c.setVsize(length);//setting it
    for (int i =0 ;i< length;i++){
        in>>c.vec_p[i];//reading input
    }
    return in;

}
//Overwriting the * operator
Vector Vector::operator*(Matrix &mat){
    //check the dimensions
    if (this->Vsize!=mat.getMR()){
        cout<<"Wrong dimension!";
        return Vector();
    }
    else {
        //create new matrix
        double* res = new double[mat.getMC()];
        if (res== NULL){
            exit(1);
        }
        //calculate
        for (int i =0; i< mat.getMC();i++) {
            res[i] = 0;
            for (int j = 0; j < mat.getMR(); j++) {
                res[i] += mat.getMat(j, i) * this->vec_p[j];
            }
        }
        return Vector(mat.getMR(),res);
    }

}

//function for return ith element
double Vector::getVec_i(int i) {
    if(i < 0 || i > this->Vsize || this->vec_p == NULL){
        return 0;
    }
    return this->vec_p[i];
}
