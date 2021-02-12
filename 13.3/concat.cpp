/*

     CH-230-Aa13p2.cpp
     Idris Mouji
     imouji@jacobs-university.de

 */

#include <bits/stdc++.h>
using namespace std;
int main() {
int n=0;
cin >> n;
string names[n];
//reading names of files
for (int i =0 ;i< n;i++){
    cin>>names[i];

}
//openning file for output
ofstream output;
if (!output.is_open()){//checking whether it is opened or not
    output.open("concatn.txt", ios::out | ios::binary);//opening output file
    //in binary mode
    if (output.bad()){//in case of error
        cout << "Error while opening the file\n";
        exit(1);
    }
}
 ifstream input;//declaring input file
for (int i=0;i<n;i++){

 if (!input.is_open()) {//checking its initial state
     input.open(names[i], ios::in | ios::binary | ios::ate);
     //opening at the end, so we can find the length easier
     if (input.bad()){//checking whether it opened
         cout<<"Error while opening the file\n";
         exit(1);
     }
 }
 int length = 0;
 length=input.tellg();//reading the size by telling us last byte
 input.seekg(0,ios::beg);//moving cursor to the beginning
 char *buffer = new char[length];//allocating char array
 input.read(buffer,length);//reading and writing the files
 output.write(buffer,length);
 output.write("\n",1);
 delete []buffer;//deallocating
 input.close();
}
 output.close();
return 0;
}
