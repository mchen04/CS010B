#include <iostream>
using namespace std;

#include "Character.h"
#include "Elf.h"

Elf::Elf(const string & name, double health, double attack, string family)
    : Character(ELF, name, health, attack), family(family) {}

void Elf::attack(Character &opponent) { 
    if (opponent.getType() == type){
        Elf &opp = dynamic_cast<Elf &>(opponent);
        if (opp.getFamily() == family){
            cout << "same family" << endl ;
            return ;
        }
    }
    opponent.damage( (health / MAX_HEALTH) * (attackStrength)) ;
    cout << "Elf " << name << " shoots an arrow at " << opponent.getHealth() << " --- TWANG!!" << endl ;
    cout << opponent.getName() << " takes " << (health / MAX_HEALTH) * (attackStrength) << " damage." << endl ;

}

string Elf::getFamily() const {
    return family ;
}