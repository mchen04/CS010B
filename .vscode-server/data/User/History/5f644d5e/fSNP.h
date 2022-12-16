#ifndef ELF
#define ELF

#include <iostream>
#include "Character.h"

using namespace std;

class Elf : public Character {
    public: 
        Elf(const string &name, double health, double attackStrength, string family);   
        void attack(Character &) override ; 
        string getFamily() const ;
    private: 
        string family ;  
};

#endif