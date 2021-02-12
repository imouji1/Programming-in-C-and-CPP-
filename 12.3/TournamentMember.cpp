#include <cstdlib>
#include <string>
#include <iostream>
#include "TournamentMember.h"

using namespace std;

string TournamentMember::location = "Default";

//void TournamentMember::setLocation(string str){
//  location = str;
//}

TournamentMember::TournamentMember(){
  cout << "\nDefault constructor";
  strcpy(firstname,"Default");
  strcpy(lastname, "Defaultos");
  strcpy(dob,"1900-01-01");
  roomnumber = 1000;
  strcpy(nationality,"Defaultian");
  location = "Defaultany";

}

TournamentMember::TournamentMember(char* newfn, char* newln, char* newdob,
int newrmnum,  char* newnat, string& loca){
  cout << "\nParametrized constructor";
  strcpy(firstname,newfn);
  strcpy(lastname, newln);
  strcpy(dob,newdob);
  roomnumber = 1000;
  strcpy(nationality,newnat);
  location = loca;

}

TournamentMember::TournamentMember(const TournamentMember& cx){
  cout << "\nCopy Constructor";
  strcpy(firstname, cx.firstname);
  strcpy(lastname, cx.lastname);
  strcpy(dob, cx.dob);
  roomnumber = cx.roomnumber;
  strcpy(nationality, cx.nationality);
  location   = cx.location;
}

TournamentMember::~TournamentMember(){
  cout << "\nDestructor";
}

void TournamentMember::print(){
  cout << "\nThe member first name is: " << firstname;
  cout << "\nThe member last name is: " << lastname;
  cout << "\nThe member date of birth is: " << dob;
  cout << "\nThe member roomnumber is: " << roomnumber;
  cout << "\nThe member nationality is: " << nationality;
  cout << "\nThe member location is: " << location;
}
