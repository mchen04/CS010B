#include <iostream>
using namespace std;

#include "Character.h"
#include "Elf.h"

Elf::Elf(const string &name, double health, double attackStrength, string family)
: Character(ELF, name, health, attackStrength) , family(family) {}

void Elf::attack(Character &opponent) { 
    if (opponent.getType() == ELF){
        Elf &opp = dynamic_cast<Elf &>(opponent);
        if (opp.family == this -> family){
            cout << "same family" << endl ;
        }
        else{
            opp.damage( (this -> health / MAX_HEALTH) * (this -> attackStrength)) ;
        }
    }
    else{
        opponent.damage( (this -> health / MAX_HEALTH) * (this -> attackStrength)) ;
    }
}

string Elf::getFamily() const {
    return family ;
}