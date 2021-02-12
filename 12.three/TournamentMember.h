#include <cstring>
using namespace std;

class TournamentMember
{
private:
    char firstName[36];
    char lastName[36];
    char dateOfBirth[11];
    static string location;//static parameter for location
    char role[36];
    char country[36];

public:
    TournamentMember();
    TournamentMember(char*,char*,char*,char*,char*);
    ~TournamentMember();
    TournamentMember(const TournamentMember&);
    void print();
    //getters and setters
    char* getFirstName();
    char* getLastName();
    char* getDateOfBirth();
    char* getRole();
    char* getCountry();
    void setFirstName(char*);
    void setLastName(char*);
    void setDateOfBirth(char*);
    void setRole(char*);
    void setCountry(char*);
    static void setLocation(string);

};

class Player : public TournamentMember
{
private:
    //parameters
    int number;
    string position;
    int goals;
    string mainLeg;
public:
    //default constructor
    Player();
    //parameter constructor
    Player(char*,char*,char*,char*,char*,int,const string&, int, const string&);
    //copy constructor
    Player(const Player&);
    //destructor
    ~Player();
    //getters
    int getNumber();
    int getGoals();
    string getPosition();
    string getMainLeg();
    //setters
    void setNumber(int);
    void setPosition(const string&);
    void setMainLeg(const string&);
    //print method
    void print();
    //method which increments the number of goals
    void goal(int);

};
// inline getter and setters for TournamentMember
inline char* TournamentMember::getFirstName()
{
    return firstName;
}
inline char* TournamentMember::getLastName()
{
    return lastName;
}
inline char* TournamentMember::getDateOfBirth()
{
    return dateOfBirth;
}
inline char* TournamentMember::getRole()
{
    return role;
}
inline char* TournamentMember::getCountry()
{
    return country;
}
inline void TournamentMember::setFirstName(char* nn)
{
    strcpy(firstName,nn);
}
inline void TournamentMember::setLastName(char* nl)
{
    strcpy(lastName,nl);
}
inline void TournamentMember::setDateOfBirth(char* nd)
{
    strcpy(dateOfBirth,nd);
}
inline void TournamentMember::setRole(char* nr)
{
    strcpy(role,nr);
}
inline void TournamentMember::setCountry(char* nc)
{
    strcpy(country,nc);
}
//inline getters and setters for Player class
inline int Player::getGoals()
{
    return goals;
}
inline int Player::getNumber()
{
    return number;
}
inline string Player::getMainLeg()
{
    return mainLeg;
}
inline string Player::getPosition()
{
    return position;
}
inline void Player::setPosition(const string& np)
{
    position=np;
}
inline void Player::setMainLeg(const string& nl)
{
    mainLeg=nl;
}
inline void Player::setNumber(int nn)
{
    number=nn;
}
