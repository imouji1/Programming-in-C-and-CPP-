/*

      CH-230-Aa13p6.c
      Idris Mouji
      imouji@jacobs-university.de

  */
#include <bits/stdc++.h>
#include "Vector.h"
#include "Matrix.h"
using namespace std;
int main() {
 ifstream mat,vec;
 ofstream out;
  if(!mat.is_open()) {
      mat.open("in1.txt", ios::in);
      if (mat.bad()) {
          cerr << "Cannot open file\n";
          exit(1);
      }
  }
  if(!vec.is_open()) {
      vec.open("in2.txt", ios::in);
      if (vec.bad()) {
          cerr << "Cannot open file\n";
          exit(1);
      }
  }

  if(!out.is_open()) {
      out.open("out.txt", ios::in);
      if (out.bad()) {
          cerr << "Cannot open file\n";
          exit(1);
      }
  }
  Matrix m;
  Vector v;
  mat>>m;
  vec>>v;
  out<<"MAT\n"<<m<<"VEC\n"<<v<<"VEC*MAC\n"<<(v*m)<<"MAC*VEC\n"<<(m*v);
  mat.close();
  vec.close();
  out.close();

  return 0;
}
