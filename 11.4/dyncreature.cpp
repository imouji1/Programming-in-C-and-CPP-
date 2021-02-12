#include "Creature.h"
#include <cstdlib>
#include <iostream>



using namespace std;
char str2int(string a);

int main(){

      string ans;
      

      do{
            getline(cin, ans);
            char a = str2int(ans);
            if(a == 'd') break;
            switch (a) {
              case 'a':{
                            Wizard *s;
                            s = new Wizard;
                            s->hover();
                            delete s;
                          continue;}

              case 'b':{
                            Hobbit *s;
                            s = new Hobbit;
                            s->skip();
                            delete s;
                          continue;}
              case 'c':{
                            Fly *s;
                            s = new Fly;
                            s->fly();
                            delete s;
                          continue;}
            }
      } while(1);


      return 0;
  }
  char str2int(string a){
    if(a == "wizard") return  'a';
    if(a == "object1") return  'b';
    if(a == "object2") return 'c';
    if(a == "quit") return 'd';
    else return 'f';
  }
