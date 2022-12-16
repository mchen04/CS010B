#include <iostream>
using namespace std;

#include "Character.h"
#include "Elf.h"

Elf::Elf(const string &name, double health, double attackStrength, string family)
: Character(ELF, name, health, attackStrength) , family(family) {}

void Elf::attack(Character &opponent) { 
    if (opponent.getType() == ELF){
        Elf &opp = dynamic_cast<Elf &>(opponent);
        if (opp.getFamily() ==  family){
            cout << "same family" << endl ;
            return ;
        }
    }
    opponent.damage( (health / MAX_HEALTH) * (attackStrength)) ;
}

string Elf::getFamily() const {
    return family ;
}