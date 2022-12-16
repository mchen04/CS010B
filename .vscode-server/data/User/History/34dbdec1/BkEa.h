#ifndef WARRIOR
#define WARRIOR

#include "Character.h"

using namespace std;

class Warrior : public Character {
    public: 
        Warrior(const string &name, double health, double attackStrength, string alli);   
        void attack(Character &);
    protected: 
        string alli ;  
};

#endif