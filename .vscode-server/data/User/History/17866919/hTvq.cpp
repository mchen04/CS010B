#include <iostream>
using namespace std;

#include "Elf.h"

Elf::Elf(const string &name, double health, double attackStrength, string family)
: Character(ELF, name, health, attackStrength) , family(family) {}

void Elf::attack(Character &opponent) { 
    Elf &opp = dynamic_cast<Elf &>(opponent);
    if (opponent.getType() == ELF){
        if (opp.family == this -> family){
            cout << "same family" << endl ;
        }
        else{
            opp.damage( (this -> health / MAX_HEALTH) * (this -> attackStrength)) ;
        }
    }
    else{
        opp.damage( (this -> health / MAX_HEALTH) * (this -> attackStrength)) ;
    }
}