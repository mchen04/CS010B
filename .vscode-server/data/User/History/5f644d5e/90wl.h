#ifndef ELF
#define ELF

#include "Character.h"

using namespace std;

class Elf : public Character {
    public: 
        Elf(const string &name, double health, double attackStrength, string family);   
        void attack(Character &) ;
    protected: 
        string family ;  
};

#endif