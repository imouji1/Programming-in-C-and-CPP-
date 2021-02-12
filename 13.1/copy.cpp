#include <iostream>
#include <fstream>
#include <cstdlib>
#include <cstring>

using namespace std;

int main(){
  string file_name;
  cout << "Enter name of file...\n";
  cin >> file_name;
  ifstream in(file_name);


  cout << "Reading file ..\n";
  if(!in.good()){
    in.clear();
    cout << "Error opening file.. \n Exiting";
    exit(1);
  }

  //
  ofstream out(".txt");
  char temp[256];
  while(!in.eof()){
  in.getline(temp,256);
  out << temp;  
  }

}
