#include <string.h>
#include <cstdlib>
#include "iostream"
#include "TournamentMember.h"

using namespace std;

int main(){

  char fn[]    = "Idris";
  char ln[]    = "Mouji";
  char dob[]   = "1998-07-21";
  int rm       = 1;
  char nat[]   = "Moroccan";
  string loca  = "Bremen";

  char fn1[]    = "Mike";
  char ln1[]    = "Tyson";
  char dob1[]   = "1980-01-21";
  int rm1       = 21;
  char nat1[]   = "American";
  string loca1  = "Philadelphia";

  class TournamentMember a;
  class TournamentMember c(a);
  class TournamentMember b(fn, ln, dob, rm, nat, loca);

  a.print();
  cout << "\n\n";
  c.print();
  cout << "\n\n";
  b.print();
//setter uses
a.setFirstname(fn1);
a.setLastname(ln1);
a.setDob(dob1);
a.setRoomnumber(rm1);
a.setNationality(nat1);
a.setLocation(loca1);

cout << "\n\n\\\\\\\\New values for porperties on the Default/////////" << endl;
a.print();

cout << "\n\n\\\\\\\\Printing using getters/////////" << endl;
cout << a.getFirstname()<< endl;
cout <<a.getLastname()<< endl;
cout <<a.getDob()<< endl;
cout <<a.getRoomnumber()<< endl;
cout <<a.getNationality()<< endl;
cout <<a.getLocation() << endl;


  return 0;
}
