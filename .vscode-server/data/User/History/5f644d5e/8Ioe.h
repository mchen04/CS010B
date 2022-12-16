#ifndef ELF
#define ELF

#include <iostream>
#include "Character.h"

enum HeroType {WARRIOR, ELF, WIZARD};

using namespace std;

class Elf : public Character {
    public: 
        Elf(const string &, double, double, string);   
        void attack(Character &) override ; 
        string getFamily() const ;
    private: 
        string family ;  
};

#endif