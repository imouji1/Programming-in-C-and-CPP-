#ifndef TOURNAMENTMEMBER_H_INCLUDED
#define TOURNAMENTMEMBER_H_INCLUDED
#include <string.h>
#include <cstring>
#include <string>

/*
first name as character array (36 characters characters including ’\0’)
• last name as character array (36 characters)
• date of birth as character array (11 characters, storage format is yyyy-mm-dd)
*/
class TournamentMember{
  private:
    char firstname[35];
    char lastname[35];
    char dob[11];
    int roomnumber;
    char nationality[20];
    static std::string location;

  public:
    //constructors
    TournamentMember();
    TournamentMember(char*, char*, char*, int , char*, std::string&);
    TournamentMember(const TournamentMember&);
    ~TournamentMember();

    //setters
    void setFirstname(char* fn){strcpy(firstname, fn);}
    void setLastname(char* ln){strcpy(lastname, ln);}
    void setDob(char* ndob){strcpy(dob, ndob);}
    void setRoomnumber(int rm){roomnumber = rm;}
    void setNationality(char* nn){strcpy(nationality, nn);}
    static void setLocation(std::string);

    //getters
    char* getFirstname(){return firstname;}
    char* getLastname(){return lastname;}
    char* getDob(){return dob;}
    int  getRoomnumber(){return roomnumber;}
    char* getNationality(){return nationality;}
    static std::string getLocation(){return location;}

    //methods
    void print();


};
inline void TournamentMember::setLocation(std::string str){
  location = str;
}

#endif// TOURNAMENTMEMBER_H
