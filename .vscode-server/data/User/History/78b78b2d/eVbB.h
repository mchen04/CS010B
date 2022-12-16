#ifndef WIZARD
#define WIZARD

#include "Character.h"

using namespace std;

class WIZARD : public Character {
    public: 
        Wizard(const string &name, double health, double attackStrength, int rank);   
        void attack(Character &);
    private: 
        int rank ;  
};

#endif