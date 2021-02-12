#include <iostream>
#include <cstring>
#include "TournamentMember.h"
using namespace std;
//allocating the location static string
string TournamentMember::location = "Default";
//default constructor
TournamentMember::TournamentMember()
{
    cout<<endl<<"Default constructor is called"<<endl;
    strcpy(firstName, "Default First Name");
    strcpy(lastName, "Default Last Name");
    strcpy(dateOfBirth, "1910-01-01");
    strcpy(role, "Default role");
    strcpy(country, "Default country");

}
//parameter constructor
TournamentMember::TournamentMember(char* nfn,char* nln,char* dob,char* nr,char* nc)
{
    cout<<endl<<"Parametric constructor is called"<<endl;
    strcpy(firstName, nfn);
    strcpy(lastName, nln);
    strcpy(dateOfBirth, dob);
    strcpy(role, nr);
    strcpy(country, nc);


}
//copy constructor
TournamentMember::TournamentMember(const TournamentMember& tm)
{
    cout<<endl<<"Copy constructor is called"<<endl;
    strcpy(firstName, tm.firstName);
    strcpy(lastName, tm.lastName);
    strcpy(dateOfBirth, tm.dateOfBirth);
    strcpy(role, tm.role);
    strcpy(country, tm.country);

}
//destructor
TournamentMember::~TournamentMember()
{
    cout<<endl<<"Destructor is called"<<endl;
}
//print method
void TournamentMember::print()
{
    cout<<endl<<"The first name is "<<firstName<<endl;
    cout<<"The last name is "<<lastName<<endl;
    cout<<"The date of birth is "<<dateOfBirth<<endl;
    cout<<"The role is "<<role<<endl;;
    cout<<"The country of origin is "<<country<<endl;
    cout<<"The location is "<<location<<endl;
}
//method for changing the location
void TournamentMember::setLocation(string s)
{
    location=s;
}
//default constructor
Player::Player() : TournamentMember()
{
    cout<<"Default constructor for Player was called"<<endl;
    number=0;
    position="Default";
    goals=0;
    mainLeg="Right";
}
//parameter constructor
Player::Player(char* nfn,char* nln,char* dob,char* nr,char* nc,int nnum,const string& npo, int ngoal, const string& nmleg)
    : TournamentMember(nfn,nln,dob,nr,nc)
{
    cout<<"Parameter constructor for Player was called"<<endl;
    number = nnum;
    position = npo;
    goals=ngoal;
    mainLeg=nmleg;
}
//copy constructor
Player::Player(const Player& npl):TournamentMember(npl)
{
    cout<<"Copy constructor for Player was called"<<endl;
    number=npl.number;
    position=npl.position;
    goals=npl.goals;
    mainLeg=npl.mainLeg;
}
//destructor
Player::~Player()
{
    cout<<"Destructor for Player was called"<<endl;
}
//print method
void Player::print()
{
    TournamentMember::print();
    cout<<"The number is "<<number<<endl;
    cout<<"The number of goals is "<<goals<<endl;
    cout<<"The position is "<<position<<endl;
    cout<<"The main leg is "<<mainLeg<<endl;
}
//method for goals
void Player::goal(int ngoals)
{
    goals+=ngoals;
}
